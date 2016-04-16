#include "Person.h"
#include "chineseletterhelper.h"
#include <QDebug>
Person::Person(QString name, int age, QString phone)
{
    _name = name;
    _pinyinRank = ChineseLetterHelper::GetLettersMix(_name);
    _age = age;
    _phone = phone;
}

Person::~Person()
{
    //qDebug()<<"~Person" << _name;
}

QString Person::name() const
{
    return _name;
}

void Person::setName(QString &name)
{
    _name = name;
    _pinyinRank = ChineseLetterHelper::GetLettersMix(_name);
}

int Person::age() const
{
    return _age;
}

void Person::setAge(int age)
{
    _age = age;
}

QString Person::phone() const
{
    return _phone;
}

void Person::setPhone(const QString &phone)
{
    _phone = phone;
}

QString Person::pinyinRank() const
{
    return _pinyinRank;
}

void Person::setPinyinRank(const QString &pinyinRank)
{
    _pinyinRank = pinyinRank;
}
