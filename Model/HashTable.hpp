//
//  HashTable.hpp
//  NodesInXCode
//
//  Created by Willson, Jacob on 5/5/16.
//  Copyright © 2016 Willson, Jacob. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>

namespace CTECData
{
    template <class Type>
    class HashTable
    {
    private:
        int capacity;
        double efficiencyPercentage;
        int size;
        HashNode<Type> * internalStorage;
        
        int findPosition(const Type& value);
        int handleCollision(const Type& value);
        void updateSize();
        
        int getNextPrime();
        bool isProime(int candidateNumber);
    public:
        HashTable();
        ~HashTable();
        
        void add(const Type& value);
        bool remove(Type value);
        bool contains(const Type& value);
        int getSize();
    };
}

#endif /* HashTable_hpp */
