#include "Attribute.h"

Attribute::Attribute(int id, string name)
{
	ID = id;
	Name = name;
}


Attribute::~Attribute()
{
}

bool Attribute::Equals(Attribute *attribute)
{
	if (this == attribute)
	{
		return true;
	}
	return false;
}

bool Attribute::Equals(Attribute &attribute)
{
	if (ID != attribute.ID)
	{
		return false;
	}
	if (Name != attribute.Name)
	{
		return false;
	}
	return true;
}
