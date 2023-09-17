#include "binarytree.h"
#include <iostream>

void BinaryTree::preOrderTraversal(Node* root)
{
    if(root == nullptr)
    {
        return;
    }
    else
    {
        std::cout << root->value << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}


void BinaryTree::inOrderTraversal(Node* root)
{
    if(root == nullptr)
    {
        return;
    }
    else
    {
        inOrderTraversal(root->left);
        std::cout << root->value << " ";
        inOrderTraversal(root->right);
    }
}

void BinaryTree::postOrderTraversal(Node* root)
{
    if(root == nullptr)
    {
        return;
    }
    else
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        std::cout << root->value << " ";
    }
}



BinaryTree::Node* BinaryTree::insert(Node* &root, int newValue)
{
   if(root == nullptr)
   {
     root = new Node;
     root->value = newValue;
     root->left = nullptr;
     root->right = nullptr;
   }
   else
   {
     if(newValue < root->value)
     {
        insert(root->left, newValue);
     }
     else if(newValue > root->value)
     {
        insert(root->right, newValue);
     }
   }

   return root;
}


