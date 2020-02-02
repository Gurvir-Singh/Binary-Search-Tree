#include "Node.h"
#include "BSTree.h"
#include <iostream>

int main()
{
    //Initialize binary tree
    BSTree BST(8);

    //Creating all nodes
    Node* three = new Node(3);
    Node* ten = new Node(10);
    Node* one = new Node(1);
    Node* six = new Node(6);
    Node* fourteen = new Node(14);
    Node* four = new Node(4);
    Node* seven = new Node(7);
    Node* thirteen = new Node(13);

    //Adding nodes to tree
    BST.appendNode(three, &BST.StartingNode);
    BST.appendNode(ten, &BST.StartingNode);
    BST.appendNode(one, &BST.StartingNode);
    BST.appendNode(six, &BST.StartingNode);
    BST.appendNode(fourteen, &BST.StartingNode);
    BST.appendNode(four, &BST.StartingNode);
    BST.appendNode(seven, &BST.StartingNode);
    BST.appendNode(thirteen, &BST.StartingNode);

    //function to find number in tree
    BST.findNumber(13, &BST.StartingNode);

    //removing all nodes on the heap and corresponding pointers
    delete three;
    delete ten;
    delete one;
    delete six;
    delete fourteen;
    delete four;
    delete seven;
    delete thirteen;

}

