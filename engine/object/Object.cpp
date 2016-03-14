/*******************************************************************************
 File Name: Object.cpp
 Descript:
 
 Version: 1.0
 Created Time: 03/13/16 17:01:11
 Compiler: 
 Editor: vim
 Author: Jimbo
 mail: jimboo.lu@gmail.com
 
 Company: 
*******************************************************************************/

#ifndef OBJECT_CPP
#define OBJECT_CPP
#include <Object.h>
#endif

Object::Object() {
	
}

Object::~Object() {
	
}

bool Object::Equals(Object *object) {
	return false;
}

bool Object::Equals(Object &objct) {
	return false;
}

Object* Object::Clone() {
	Object *p = new Object();
	return p;
}
