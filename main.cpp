#include "binarytree.h"
#include <iostream>

int main() {
    BinaryTree tree;
    
    tree.insert(4);
    tree.insert(3);
    tree.insert(6);
    tree.insert(2);
    tree.insert(5);
    tree.insert(7);

    tree.deleteNode(20);

    std::cout << "Pre-Order Traversal: " << std::endl;
    tree.preOrderTraversal(tree.root);

    std::cout << "\nIn-Order Traversal: " << std::endl;
    tree.inOrderTraversal(tree.root);

    std::cout << "\nPost-Order Traversal: " << std::endl;
    tree.postOrderTraversal(tree.root);

    std::cout << "\n BFS: " << std::endl;
    tree.bfs(tree.root);
   
    
    return 0;
}

