
        QEventLoop eventLoop;

        // "quit()" the event-loop, when the network request "finished()"
        QNetworkAccessManager mgr;
        QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));

        // the HTTP request
        QNetworkRequest req( QUrl( QString("http://samples.openweathermap.org/data/2.5/weather?q=London,uk&appid=b6907d289e10d714a6e88b30761fae22") ) );
        QNetworkReply *reply = mgr.get(req);
        eventLoop.exec(); // blocks stack until "finished()" has been called

        if (reply->error() == QNetworkReply::NoError) {

            QString strReply = (QString)reply->readAll();

            //parse json
            qDebug() << "Response:" << strReply;
            QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());

            QJsonObject jsonObj = jsonResponse.object();
            QJsonValue value = jsonObj["weather"];
            QJsonObject jsonObj3 = value.toArray()[0].toObject();
            QJsonValue value2 = jsonObj3["description"];

            qDebug() << "username:" <<value2.toString();
            qDebug() << "password:" << jsonObj["number"].toInt();

            delete reply;
        }
        else {
            //failure
            qDebug() << "Failure" <<reply->errorString();
            delete reply;
        }
