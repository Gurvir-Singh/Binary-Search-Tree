#pragma once
#include "Node.h"
#include <String>
#include <vector>
class BSTree {
	
public :
	Node StartingNode;	
	std::vector<Node*> NodePtrs;
	 
	BSTree(int rootVal);

	~BSTree();

	void addNumber(int numToAdd);
	 
	void appendNode(Node* nodeToAppend, Node* StartPos);

	void findNumber(int numToFind, Node* Pos, std::string list = "");


};
