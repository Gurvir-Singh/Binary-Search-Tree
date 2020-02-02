#pragma once
#include <memory>
#include <iostream>
class Node {

	public:

		Node(int val = 1) {
			this->NodeValue = val;
		}	

		int NodeValue;
		bool hasLeftNode = false;
		bool hasRightNode = false;
		Node* leftNode = nullptr;
		Node* rightNode = nullptr;

		void AppendNode(Node nodeToAppend) {
			if (nodeToAppend.NodeValue > this->NodeValue) {
				rightNode = &nodeToAppend;
				hasRightNode = true;
			}
			else if (nodeToAppend.NodeValue < this->NodeValue) {
				leftNode = &nodeToAppend;
				hasLeftNode = true;
				;
			}
			else if (nodeToAppend.NodeValue == this->NodeValue) {
				std::cout << "Node already exists.";
			}
		}

};