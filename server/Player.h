#pragma once
#include "Object.h"
#include "Attribute.h"
class Player :
	public Object
{
public:
	Attribute *AttributePtr;

	// ���캯��
	Player(Attribute *attribute);

	// ��������
	~Player();

	// ժҪ��
	//      �ж�ָ������͵�ǰ������ڴ��ַ�Ƿ���ͬ��
	virtual bool Equals(Player *player);

	// ժҪ��
	//      �ж�ָ������͵�ǰ�����Ƿ���ȡ�
	virtual bool Equals(Player player);
};

