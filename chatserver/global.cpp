#include "global.h"
#include <QSqlQuery>
#include <QList>
#include "global.h"

emp employeeIds;

global::global()
{


}

void global::store()
{
    QSqlQuery query;
        query.prepare("SELECT CIN FROM GS_EMPLOYÉ");
        while (query.next())
        {
            QString id = query.value(0).toString();
            employeeIds.table.append(id);
        }

}
