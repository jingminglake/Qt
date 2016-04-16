#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QLocale>
#include <QCollator>
#include <QDebug>
#include <QThread>
#include "Person.h"
#include "chineseletterhelper.h"
bool compareP(const Person *p1,const Person *p2)
{
    QLocale loc(QLocale::English);
    QCollator qco(loc);
    int result =  qco.compare(p1->pinyinRank(), p2->pinyinRank());
    if(result < 0)
        return true;
    else
        return false;
}
int main(int argc, char *argv[])
{
    // QGuiApplication app(argc, argv);

    QList<Person*> personList;
    Person *p1 = new Person("张三",20,"121213123");
    personList.append(p1);
    Person *p2 = new Person("李c四",30,"121213213");
    personList.append(p2);
    Person *p3 = new Person("王e五",21,"341213123");
    personList.append(p3);
    Person *p4 = new Person("阿强W",24,"121213123");
    personList.append(p4);
    Person *p5 = new Person("aa",23,"121333123");
    personList.append(p5);
    Person *p6 = new Person("zee",23,"121333123");
    personList.append(p6);
    qDebug() << "排序前:";
    for(int i = 0; i < personList.size(); ++i)
    {
        qDebug() << personList.at(i)->name();
        //qDebug() << personList.at(i)->pinyinRank();
    }

    qSort(personList.begin(),personList.end(),compareP);

    qDebug() << "排序后:";
    for(QList<Person *>::iterator it = personList.begin(); it != personList.end(); ++it)
    {
        qDebug() << (*it)->name();
    }
    //释放person对象内存
    foreach (Person *p, personList) {
        delete p;
    }
    personList.clear();
    QThread::msleep(100);//程序有时候在打印最后一条前结束。不知道为什么。加上sleep就好了
    return 0;
}
