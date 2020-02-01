#pragma once
#include "Node.h"
class BSTree {
public :

	Node StartingNode;
	
	void setStartNode(int valueToSet) {
		StartingNode.NodeValue = valueToSet;
	}

	void appendNode(Node& nodeToAppend, Node* StartPos) {
		if (nodeToAppend.NodeValue > StartPos->NodeValue) {

			if (StartPos->hasRightNode) {
				appendNode(nodeToAppend, StartPos->rightNode);
			}
			else
			{
				StartPos->AppendNode(nodeToAppend);
			}
		}
		else if (nodeToAppend.NodeValue < StartPos->NodeValue) {

			if (StartPos->hasLeftNode) {
				appendNode(nodeToAppend, StartPos->leftNode);
			}
			else
			{
				StartPos->AppendNode(nodeToAppend);
			}
		}
		else
		{
			std::cout << "Node already exists.";
		}
	}

};