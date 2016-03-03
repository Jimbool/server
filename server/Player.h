#pragma once
#include "Object.h"
#include "Attribute.h"
class Player :
	public Object
{
public:
	Attribute *AttributePtr;

	// 构造函数
	Player(Attribute *attribute);

	// 析构函数
	~Player();

	// 摘要：
	//      判断指定对象和当前对象的内存地址是否相同。
	virtual bool Equals(Player *player);

	// 摘要：
	//      判断指定对象和当前对象是否相等。
	virtual bool Equals(Player player);
};

