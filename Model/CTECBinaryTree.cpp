//
//  CTECBinaryTree.cpp
//  NodesInXCode
//
//  Created by Willson, Jacob on 4/13/16.
//  Copyright © 2016 Willson, Jacob. All rights reserved.
//

#include "CTECBinaryTree.hpp"

using namespace CTECData;

template <class Type>
void CTECBinaryTree<Type> :: inorderTraversal(TreeNode<Type> * currentNode)
{
    if (curentNode != nullptr)
    {
        inorderTraversal(currentNode->getLeftChild());
        cout << currentNode->getValue() << " " ;
        inorderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
int CTECBinaryTree<Type> :: getSize()
{
    return size;
}

template <class Type>
int CTECBinaryTree<Type> :: calculateSize(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        postorderTraversal(currentNode->getLeftChild());
        postorderTraversal(currentNode->getRightChild());
        size++;
    }
}

template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value)
{
    bool isInTree = false;
    if(root->getValue() == value)
    {
        return true;
    }
    else if(value < root->getValue())
    {
        isInTree = contains(value, root->getLeftChild());
    }
    else{
        isInTree = contains(value, root->getRightChild());
    }
    return false;
}

template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value, CTECBinaryTree<Type> * currentTree)
{
    if(currentTree == nullptr)
    {
        return false;
    }
    
    if(currentTree->getRoot()->getValue() == value)
    {
        return true;
    }
    else if(value < currentTree->getRoot()->getValue())
    {
        return contains(value, currentTree->getRoot()->getLeftChild());
    }
    else
    {
        return contains(value, currentTree->getRoot()->getRightChild());
    }
    return false;
}

template <class Type>
bool CTECBinaryTree<Type> :: insert(const Type& value)
{
    TreeNode<type> * insertedNode(value);
    TreeNode<Type> * current;
    TreeNode<Type> * trailingCurrent;
    assert(insertedNode != nullptr);
    
    if(contains(value))
    {
        return false;
    }
    else
    {
        if(root == nullptr)
        {
            root = insertedNode;
        }
        else
        {
            current = root;
            
            while (current != nullptr)
            {
                trailingCurrent = current;
                
                if ( current->getValue() > value)
                {
                    current = current->getLeftChild();
                }
                else
                {
                    current= current->getRightChild();
                }
            }
            if(trailingCurrent->getValue() > value)
            {
                trailingCurrent->setLeftChild(insertedNode);
            }
            else
            {
                trailingCurrent-setRightChild(insertedNode);
            }
            
            insertedNode->setParent(trailingCurrent);
        }
        return true;
    }
}

template <class Type>
Type CTECBinaryTree<Type> :: remove(const Type &value)
{
    if(!contains(value))
    {
        return value;
    }
}

template<class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getRightMostChild(CTECBinaryTree<Type> * leftSubTree)
{
    TreeNode<Type> * rightNode = leftSubTree->getRoot();
    while(rightNode->getRightChild() != nullptr)
    {
        rightNode = rightNode->getRightChild();
    }
    
    return rightNode;
}

template <class Type>
TreeNode<Type> * CTECBinaryTree<Type> :: getLeftMostChild(CTECBinaryTree<Type> * rightSubTree)
{
    TreeNode<Type> * leftNode = rightSubTree->getRoot();
    while(leftNode->getLeftChild() != nullptr);
    {
        leftNode = leftNode->getLeftChild();
    }
    
    return leftNode;
}

template <class Type>
void CTECBinaryTree<Type> :: remove(TreeNode<Type> * nodeToRemove)
{
    TreeNode<Type> * current;
    TreeNode<Type> *
    
    if(nodeToRemove == nullptr)
    {
        cerr << "Doh! You can't remove an empty non-existent thing!" <<endl;
    }
    else if(nodeToRemove->getRightchild() == nullptr && nodeToRemove->getLeftChild() == nullptr) //LeafNode
    {
        temp = nodeToRemove;
        nodeToRemove = nullptr;
        delete temp;
    }
    else if(nodeToRemove->getRightChild() == nullptr)
    {
        temp = nodeToRemove;
        nodeToRemove = temp->getLeftChild();
        delete temp;
    }
    else if(nodeToRemove->getLeftChild() == nullptr)
    {
        temp = nodeToRemove;
        nodeToRemove = temp->getRightChild();
        delete temp;
    }
    else
    {
        current = nodeToRemove->getLeftChild();
        trailing = nullptr
        
        while(current->getRightChild != nullptr)
        {
            trailing = current;
            current = current->getRightChild();
        }
        
        nodeToRemove->setValue(current->getValue());
        
        if(trailing== nullptr)
        {
            nodeToRemove->setLeftChild(current->getLeftChild());
        }
        else
        {
            trailing->setRightChild(current->getLeftChild());
        }
        
        delete current;
    }
}

