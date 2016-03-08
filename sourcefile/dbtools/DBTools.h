#pragma once
#include "Object.h"
class DBTools :
	public Object
{
public:
	DBTools();
	~DBTools();
	virtual bool Equals(DBTools *dbTools);
	virtual bool Equals(DBTools &dbTools);
};

