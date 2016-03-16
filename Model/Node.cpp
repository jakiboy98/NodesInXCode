/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jwil9706
 */

#include "Node.h"
using namespace std;

template <class Type>
Node<Type>::Node()
{
	// TODO Auto-generated constructor stub
	pointers = nullptr;
}

template <class Type>
Node<Type>::Node(Type value)
{
	// TODO Auto-generated constructor stub
	this->value = value;
	pointers = nullptr;
}

template <class Type>
Node<Type>::~Node()
{
	//TODO Auto-generated destructor stub
}

template <class Type>
void Node<Type> :: setValue(Type value)
{
	//TODO Auto-generated something
	return this->value;
}

template <class Type>
Type Node<Type> :: getValue()
{
	this->value = value;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}

