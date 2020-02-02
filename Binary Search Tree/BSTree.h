#pragma once
#include "Node.h"
#include <String>
#include <vector>
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

	void findNumber(int numToFind, Node* Pos, std::string list) {
		
		if (Pos->NodeValue == numToFind) {
			list += std::to_string(numToFind);
			std::cout << list;
		}
		else if (Pos->NodeValue > numToFind) {
			list += std::to_string(numToFind) + ", ";
			findNumber(numToFind, Pos->leftNode, list);
		}
		else if (Pos->NodeValue < numToFind) {
			list += std::to_string(numToFind) + ", ";
			findNumber(numToFind, Pos->rightNode, list);
		}
	}

	void printTree() {
		//int Tree[9][9];
		//Tree[0][0] = StartingNode.NodeValue;

	}


};