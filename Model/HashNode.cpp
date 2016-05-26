//
//  HashNode.cpp
//  NodesInXCode
//
//  Created by Willson, Jacob on 5/9/16.
//  Copyright © 2016 Willson, Jacob. All rights reserved.
//

#include "HashNode.hpp"

template <class Type>
HashNode<Type> :: HashNode(int key, const Type& value)
{
    this-key = key;
    this->value = value;
}

template <class Type>
void HashNode<Type> :: setKey(int key)
{
    this->key = key;
}

template