#ifndef PERSON_H
#define PERSON_H

#include <QObject>
class Person
{
public:
    Person();
    Person(QString name, int age, QString phone);
    ~Person();
    QString name() const;
    void setName(QString &name);

    int age() const;
    void setAge(int age);

    QString phone() const;
    void setPhone(const QString &phone);

    QString pinyinRank() const;
    void setPinyinRank(const QString &pinyinRank);

private:
    QString _name;
    int _age;
    QString _phone;
    QString _pinyinRank;
};

#endif // PERSON_H
