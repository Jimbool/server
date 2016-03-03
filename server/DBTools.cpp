#include "DBTools.h"


DBTools::DBTools()
{

}


DBTools::~DBTools()
{

}

bool DBTools::Equals(DBTools *dbTools)
{
	if (this == dbTools)
	{
		return true;
	}
	return false;
}

bool DBTools::Equals(DBTools &dbTools)
{
	return true;
}
