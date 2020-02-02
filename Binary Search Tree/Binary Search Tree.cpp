#include "Node.h"
#include "BSTree.h"
#include <iostream>

int main()
{
    BSTree BST;
    BST.setStartNode(8);
    Node* startptr = &BST.StartingNode;
    Node* three = new Node(3);
    Node* ten = new Node(10);
    Node* one = new Node(1);
    Node* six = new Node(6);
    Node* fourteen = new Node(14);
    Node* four = new Node(4);
    Node* seven = new Node(7);
    Node* thirteen = new Node(13);
    BST.appendNode(three, startptr);
    BST.appendNode(ten, startptr);
    BST.appendNode(one, startptr);
    BST.appendNode(six, startptr);
    BST.appendNode(fourteen, startptr);
    BST.appendNode(four, startptr);
    BST.appendNode(seven, startptr);
    BST.appendNode(thirteen, startptr);

    //BST.findNumber(3, startptr, "");

    delete three;
    delete ten;
    delete one;
    delete six;
    delete fourteen;
    delete four;
    delete seven;
    delete thirteen;

    
    

    std::cout << "finished";
    
    
    
    /*
    Node MainNode;
    MainNode.NodeValue = 8;
    Node Node2;
    Node2.NodeValue = 3;
    MainNode.AppendNode(Node2);
    std::cout << MainNode.leftNode->NodeValue;
    */

}

