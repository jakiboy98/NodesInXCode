/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: jwil9706
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "CTECList.cpp"
#include <iostream>
using namespace std;

template <class Type>

class CTECList
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
	void calculateSize();
public:
	CTECList();
	~CTECList();
	int getSize();
	void addToFront(Type value);
	void addToEnd(Type value);
	void addAtIndex(int index, Type value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index);
};



#endif /* MODEL_CTECLIST_H_ */
