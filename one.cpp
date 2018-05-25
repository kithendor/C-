    QString settings;
        QFile file;
        file.setFileName("C:/set.json");
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        settings = file.readAll();
        file.close();

        QJsonDocument sd = QJsonDocument::fromJson(settings.toUtf8());
        qWarning() << sd.isNull(); // <- print false :)
        QJsonObject obj = sd.object();
        //QJsonValue value = sett2.value(QString("title"));
        QJsonValue value = obj["title"];

        QJsonObject abj2 = value.toObject();
        QJsonValue value2 = abj2["prwtos"];

            qWarning()<<value2.toString();

//        QJsonObject sett3 = value.toObject();
//         QJsonValue value2 = sett3.value(QString("name"));

//        qWarning() <<  value2.toString(); // <- print my title
