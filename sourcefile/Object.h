#ifndef OBJECT_H
#define OBJECT_H
#endif
using namespace std;
class Object
{
public:
	Object();
	virtual ~Object();
	virtual bool Equals(Object *object);
	virtual bool Equals(Object &object);
};

