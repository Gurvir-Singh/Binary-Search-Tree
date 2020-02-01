#pragma once
#include <memory>
#include <iostream>
class Node {

	public:
		
		int NodeValue;
		bool hasLeftNode = false;
		bool hasRightNode = false;
		Node* leftNode;
		Node* rightNode;

		void AppendNode(Node& nodeToAppend) {
			if (nodeToAppend.NodeValue > NodeValue) {
				rightNode = &nodeToAppend;
				hasRightNode = true;
			}
			else if (nodeToAppend.NodeValue < NodeValue) {
				leftNode = &nodeToAppend;
				hasLeftNode = true;
			}
			else {
				std::cout << "Node already exists.";
			}
		}

};