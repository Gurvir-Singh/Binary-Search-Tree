#include "Node.h"
#include <iostream>

int main()
{
    Node MainNode;
    MainNode.NodeValue = 8;
    Node Node2;
    Node2.NodeValue = 3;

    MainNode.AppendNode(Node2);
    std::cout << MainNode.leftNode->NodeValue;
}

