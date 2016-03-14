/*******************************************************************************
 File Name: Object.h
 Descript:
 
 Version: 1.0
 Created Time: 03/13/16 16:55:22
 Compiler: 
 Editor: vim
 Author: Jimbo
 mail: jimboo.lu@gmail.com
 
 Company: 
*******************************************************************************/

#ifndef OBJECT_H
#define OBJECT_H
#endif

class Object {
	public:
		Object();
		virtual ~Object();
		virtual bool Equals(Object *objcet);
		virtual bool Equals(Object &object);
		virtual Object Clone();
}
