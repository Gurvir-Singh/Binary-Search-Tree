#include "BSTree.h"
BSTree::BSTree(int rootVal) {
	this->StartingNode.NodeValue = rootVal;
}

BSTree::~BSTree() {
	for (int i = 0; i < NodePtrs.size(); i++) {
		delete NodePtrs.at(i);
	}
}

void BSTree::addNumber(int numToAdd) {
	NodePtrs.push_back(new Node(numToAdd));
	appendNode(NodePtrs.back(), &StartingNode);
}

void BSTree::appendNode(Node* nodeToAppend, Node* StartPos) {
	if (nodeToAppend->NodeValue > StartPos->NodeValue) {

		if (StartPos->hasRightNode) {
			appendNode(nodeToAppend, StartPos->rightNode);
		}
		else
		{
			StartPos->AddNode(nodeToAppend);
		}
	}
	else if (nodeToAppend->NodeValue < StartPos->NodeValue) {

		if (StartPos->hasLeftNode) {
			appendNode(nodeToAppend, StartPos->leftNode);
		}
		else
		{
			StartPos->AddNode(nodeToAppend);
		}
	}
	else
	{
		std::cout << "Node already exists.";
	}
}

void BSTree::findNumber(int numToFind, Node* Pos, std::string list = "") {

	if (Pos->NodeValue == numToFind) {
		list += std::to_string(numToFind);
		std::cout << list << "\n\n";
	}
	else if (Pos->NodeValue > numToFind) {
		list += std::to_string(Pos->NodeValue) + ", ";
		findNumber(numToFind, Pos->leftNode, list);
	}
	else if (Pos->NodeValue < numToFind) {
		list += std::to_string(Pos->NodeValue) + ", ";
		findNumber(numToFind, Pos->rightNode, list);
	}
}