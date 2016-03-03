#pragma once
#include <string>
using namespace std;
class Object
{
public:
	string *Name;
	Object();
	~Object();
	virtual bool Equals(Object *object);
	virtual bool Equals(Object object);
};

