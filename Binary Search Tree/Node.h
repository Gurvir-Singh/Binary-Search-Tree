#pragma once
#include <iostream>
class Node {

	public:

	int NodeValue;
        
	Node() {}
	
	Node(int nodeVal) {
		NodeValue = nodeVal;
	}
		
	bool hasLeftNode = false;
	bool hasRightNode = false;
	Node* leftNode = nullptr;
	Node* rightNode = nullptr;

	void AddNode(Node* nodeToAppend) {
		if (nodeToAppend->NodeValue > this->NodeValue) {
			rightNode = nodeToAppend;
			hasRightNode = true;
		}
		else if (nodeToAppend->NodeValue < this->NodeValue) {
			leftNode = nodeToAppend;
			hasLeftNode = true;			
		}
	        else if (nodeToAppend->NodeValue == this->NodeValue) {
			std::cout << "Node already exists.";
		}
	}

};
