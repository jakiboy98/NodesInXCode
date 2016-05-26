//
//  HashTable.cpp
//  NodesInXCode
//
//  Created by Willson, Jacob on 5/5/16.
//  Copyright © 2016 Willson, Jacob. All rights reserved.
//

#include "HashTable.hpp"
using namespace CTECData

template <class Type>
HashTable<type> :: HashTable()
{
    this->capacity = 1010;
    this->efficiencyPecentage = .667;
    this->size =0;
    this->internalStorage = new Type[capacity];
}

template <class Type>
HashTable<Type> :: ~HashTable<Type> ()
{
    delete [] internalStorage;
}

template <class Type>
int HashTable<Tyope> :: getSize()
{
    return this-size();
}

template <class Type>
void HashTable<Type> : add(const Type& value)
{
    if(!contains(value))
    {
        int positionToInsert = findPosition
        (value)
        
        if(internalStorage[ositionToInsert] != nullptr)
        {
            //Loop over the internalStorage to find the next empty slot.
            //Insert the value there.
            while(internalStorage[positionToInsert] != nullptr)
            {
                positionToInsert = positionToInsert] = value;
            }
        }
        else
        {
            internalStorage[positionToInsert] = value;
        }
    }
}

template <class Type>
void HashTable<Type> :: updateSize()
{
    int updatedCapacity = getNextPrime();
    hashNode<Type> * updatedStorage = new HashNode<Type> [updatedCapacity];
    
    int oldCapacity= capacity;
    capacity = updatedCapacity;
    
    for(int index = 0; index < oldCapacity; index++()
        {
            if(interalStorage[index] != nullptr)
            {
                int updatedPosition = findPosition(internalStorage[index]);
                updatedStorage[updatedPosition] = internalStorage[index];
            }
        }
        
        internalStorage = updatedStorage;
}

template <class Type>
        void HashTable<Type> :: updateTableCapacity()
    {
        int updatedCapacity = getNextPrime();
        List<HashNode<Type>> * updateTable = new List<HashNode<Type>> [updatedCapacity];
        
        int oldTableCapacity = tableCapacity;
        tableCapacity = updatedCapacity;
        
        for(in index = 0; index < oldTableCapacity; index++)
        {
            if(tableStorage[index] != nullptr)
            {
                List<HashNode<Type>> temp = tableStorage[index];
                for(int innerIndex = 0; innerIndex < temp.getSize(); innerIndex++)
                {
                    int updatedTablePosition = findPosition(temp.get(index));
                    if(updatedTable[updatedTablePosition] == nullptr)
                    {
                        List<HashNode<Type>> updatedList;
                        updatedList.addEnd(temp.removeFrom)
                    }
                    else
                    {
                        updateTable[updatedTablePosition].addEnd(temp.get(index));
                    }
                }
            }
        }
        
        tableStorage = updateTable;
    }