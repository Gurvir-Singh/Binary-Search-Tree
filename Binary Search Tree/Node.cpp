
#include "Node.h"

void Node::AddNode(Node* nodeToAppend) {
	if (nodeToAppend->NodeValue > NodeValue) {
		rightNode = nodeToAppend;
		hasRightNode = true;
	}
	else if (nodeToAppend->NodeValue < NodeValue) {
		leftNode = nodeToAppend;
		hasLeftNode = true;
	}
	else if (nodeToAppend->NodeValue == NodeValue) {
		std::cout << "Node already exists.";
	}
}

Node::Node(int nodeVal) {
	NodeValue = nodeVal;
}