#include "../object/Object.h"
#include <string>

using namespace std;

class Attribute :
	public Object
{
public:
	int ID;
	string Name;
	Attribute(int id, string name);
	~Attribute();
	virtual bool Equals(Attribute *attribute);
	virtual bool Equals(Attribute &attribute);
};

