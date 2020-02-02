#include "Node.h"
#include "BSTree.h"
#include <iostream>

int main()
{
    BSTree BST;
    BST.setStartNode(8);
    Node* startptr = &BST.StartingNode;
    Node three(3);
    Node ten(10);
    Node one(1);
    Node six(6);
    Node fourteen(14);
    Node four(4);
    Node seven(7);
    Node thirteen(13);
    BST.appendNode(three, startptr);
    BST.appendNode(ten, startptr);
    BST.appendNode(one, startptr);
    BST.appendNode(six, startptr);
    BST.appendNode(fourteen, startptr);
    BST.appendNode(four, startptr);
    BST.appendNode(seven, startptr);
    BST.appendNode(thirteen, startptr);

    //BST.findNumber(3, startptr, "");
    

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

