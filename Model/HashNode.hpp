//
//  HashNode.hpp
//  NodesInXCode
//
//  Created by Willson, Jacob on 5/9/16.
//  Copyright © 2016 Willson, Jacob. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp
#include <iostream>

namespace CTECData
{
    template <class Type>
    cass HashNode
    {
    private:
        int key;
        Type value;
    public:
        HashNode(int key, const Type& value);
        void setKey(int key);
        void setValue(Type value);
        int getey();
        int getKey();
        Type getValue();
    };
}

#endif /* HashNode_hpp */
