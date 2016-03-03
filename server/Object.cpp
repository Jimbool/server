#include "Object.h"


Object::Object()
{
}


Object::~Object()
{
}

bool Object::Equals(Object *object)
{
	if (this == object)
	{
		return true;
	}
	return false;
}

bool Object::Equals(Object object)
{
	return false;
}
