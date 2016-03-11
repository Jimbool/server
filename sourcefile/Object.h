#ifndef OBJECT_H
#define OBJECT_H
#include <string>
#endif
using namespace std;
class Object
{
public:
	Object();
	virtual ~Object();
	virtual bool Equals(Object *object);
	virtual bool Equals(Object &object);
	virtual Object Clone();
};

