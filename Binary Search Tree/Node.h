#pragma once
#include <iostream>
class Node {

	public:

	int NodeValue;
        
	Node() {}
	
	Node(int nodeVal);
		
	bool hasLeftNode = false;
	bool hasRightNode = false;
	Node* leftNode = nullptr;
	Node* rightNode = nullptr;

	void AddNode(Node* nodeToAppend);

};
