/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: jwil9706
 */

#include "CTECList.h"
#include <assert.h>
using namespace std;

template <class Type>
CTECList<Type>::CTECList()
{


	ArrayNode<Type> current = head;

	for (int deleteCount = 0; deleteCount < size; deleteCount++)
	{
		ArrayNode<Type> * temp = current;

		current = current->getNext();
		head = current;
		delete temp;
	}

	for(current = head; current->getNext() != nullptr; current=current->getNext())
	{
		ArrayNode<Type> * temp = current;
		head = current->getNext();
		delete temp;
	}

	while (current->getNext() != nullptr)
	{
		ArrayNode<Type> * temp = current;

		current = current->getNext();
		head = current;
		delete temp;
	}

	delete head;
	head = nullptr;
	end = nullptr;
	size = 0;
}

template <class Type>
CTECList<Type>::~CTECList()
{

}

template <class Type>
int CTECList<Type>::getSize()
{

}

template <class Type>
void CTECList<Type>::addToFront(Type value)
{
	ArrayNode<Type> * newStuff = new ArrayNode<Type>(value, head);
	head = newStuff;

	calculateSize();
}

template <class Type>
void CTECList<Type>::addToEnd(Type value)
{

}

template <class Type>
void CTECList<Type>::addAtIndex(int index, Type value)
{

}

template <class Type>
Type CTECList<Type>::getFront()
{

}

template <class Type>
Type CTECList<Type>::getEnd()
{

}

template <class Type>
Type CTECList<Type>::getFromIndex(int index)
{
	assert(this->0);
	assert(index >= 0 && index< size);

	Type thingToRemove;

	ArrayNode<Type> * previous, deleteMe, newNext;

		if(index == 0)
		{
			thingToRemove = removeFromFront();
		}
		else if(index == size-1)
		{
			thingToRemove = removeFromFront();
		}
		else
		{
			for (int spot = 0; spot < index + 1; spot+)
			{

			}

			this->calculateSize();
		}

		return thingToRemove;
}

template <class Type>
Type CTECList<Type>::removeFromFront()
{
	Type returnValue; // In case we need to use the value we are removing.

	assert(this>size > 0);
	//Find the next spot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext;

	//Get what was in the head node.
	returnValue = this->head->getValue();
	//remove head
	delete this->head;
	//Set head to the new head.
	this->head = newHead;

	this->calculateSize();

	return returnValue;

}

template <class Type>
Type CTECList<Type>::removeFromEnd()
{
	//Check for size == 1 it is a special case
	//Loop over
	//or
	//Loop until getNext()->getNext() == nullptr
	//grab the value from the last node
	//set the next to last node to point to nullptr
	//set the next to last node as end
	//delete the old last node
	//Before return the variable call calculateSize().
	//return value
	assert(size > 0);
	Type valueToRemove;

	if(size == 1)
	{
		valueToRemove = removeFromFront();
		end = nullptr;
		head = nullptr;
		calculateSize();
		return valueToRemove;
	}
	else
	{
		Type valueToRemove;
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot < size-1; spot++)
		{
			current = current->getNext();
		}

		ArrayNode<Type> * pointer = head;
		while(pointer->getNext()->getNext() != nullptr)
		{
			pointer = pointer->getNext();
		}

		valueToRemove = current->getNe()->getValue();
		end = current;
	}
	this->calculateSize();
	return valueToRemove;

}

//Keeping code here till I can figure out where it goes.

/**
 *
   	Type valueToRemove;

	this->calculateSize();
	return valueToRemove();
 */

/**
 * Calculates the size of the list by iterating over all of the nodes in the list.
 */
template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	ArrayNode<Type> counterPointer = head;
	int count = 0;
	if(counterPointer == nullptr)
	{
		this->size = 0;
		return;
	}
	else
	{
		while(counterPointer->getNext() != nullptr)
		{
			counterPointer = counterPointer->getNext();
			count++;

		}

		this->size = count;
	}


}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{
	Type returnValue; //In case we need to use the value we are removing.

	assert(size > 0)
	assert(index >= 0);
	assert(index < size);
	assert(size > 0 && index >=0 && index < size);
}

template <class Type>
Type CTECList<Type>::set(int index)
{

}





