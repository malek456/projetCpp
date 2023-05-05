#ifndef GLOBAL_H
#define GLOBAL_H
#include <QList>



struct emp
{
    QList<QString> table;
};

extern emp employeeIds;

class global
{
public:
    global();
    void store();
};

#endif // GLOBAL_H
