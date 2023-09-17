#ifndef BINARYTREE_
#define BINARYTREE_

class BinaryTree
{
    private:
      struct Node
      {
         int value;
         Node* left;
         Node* right;
      };
      

    public:
      BinaryTree() : root(nullptr) {}
      void inOrderTraversal(Node* root);
      void preOrderTraversal(Node* root);
      void postOrderTraversal(Node* root);
      Node* insert(Node* &root, int newValue);

      Node* root;
};

#endif
