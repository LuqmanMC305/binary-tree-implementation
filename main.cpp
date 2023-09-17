#include "binarytree.h"
#include <iostream>

int main() {
    BinaryTree tree;
    
    tree.insert(tree.root, 50);
    tree.insert(tree.root, 30);
    tree.insert(tree.root, 70);
    tree.insert(tree.root, 20);
    tree.insert(tree.root, 40);
    tree.insert(tree.root, 60);
    tree.insert(tree.root, 80);

    std::cout << "Pre-Order Traversal: " << std::endl;
    tree.preOrderTraversal(tree.root);

    std::cout << "\nIn-Order Traversal: " << std::endl;
    tree.inOrderTraversal(tree.root);

    std::cout << "\nPost-Order Traversal: " << std::endl;
    tree.postOrderTraversal(tree.root);

    
    return 0;
}

