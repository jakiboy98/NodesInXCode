//
//  Graph.hpp
//  NodesInXCode
//
//  Created by Willson, Jacob on 4/25/16.
//  Copyright © 2016 Willson, Jacob. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp
#includ <set>

namespace CTECData
{
    template <class Type>
    class Graph
    {
    private:
        static const int MAXIMUM = 20;
        bool edges [MAXIMUM][MAXIMUM];
        Type labels[MAXIMUM];
        int manyVertices;
    public:
        Graph();
        virtual ~Graph();
        
        void addVertex(const Typ& label);
        void addEdge(int source, int target);
        void removeEdge(int source, int target);
        Type& operator [] (int vertext);
        bool isEdge(int source, int target) const;
        set<int> neighbors(int vertex);
        Type& operator [] (int vertex) const;
        int size() const;
        bool isEdge(int source, int target) const;
        std::set<int> neighbors(int vertex);
        Type operator [] (int vertext) onst;
    };
}

#include <stdio.h>

#endif /* Graph_hpp */
