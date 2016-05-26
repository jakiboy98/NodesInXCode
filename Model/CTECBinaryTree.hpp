//
//  CTECBinaryTree.hpp
//  NodesInXCode
//
//  Created by Willson, Jacob on 4/13/16.
//  Copyright © 2016 Willson, Jacob. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include <stdio.h>
namespace CTECData
{
template <class Type>
class CTECBinaryTree
{
private:
    TreeNode<Type> * root;
    int height;
    int size;
    bool balanced;
    bool containsType value, CTECBinaryTree<Type< * currentTree); //Done.
    void calculateSize(TreeNode<Type> * currentNode); //Done.
    TreeNode<Type> * getRightMostChild(CTECBinaryTree * leftSubTree);
    TreeNode<Type> * getLeftMostChild(CTECBinaryTree * rightSubTree);
public:
    CTECBinaryTree(); //Done.
    ~CTECBinaryTree();
    bool insert(const Type& value); //done.
    bool contains(Type value);
    Type remove(const Type& value);
    int getHeight();
    int getSize(); //Done.
    bool isBalanced();
    TreeNode<Type> * getRoot();
    void inorderTraversal(TreeNode<type> * currentNode); //Done.
    void postorderTraversal(TreeNode<Type> * currentNode); //Done.
    void preorderTraversal(TreeNode<Type> * currentNode); //Done.
};
}

#endif /* CTECBinaryTree_hpp */
