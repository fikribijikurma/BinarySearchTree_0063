#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* righchild;

	Node(string i, Node * 1, Node* r)
	{
		info = i;
		leftchild = 1;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL;
	}

	void insert(string element)
	{
		Node* newNode = new Node(element, NULL, NULL);
		newNode->info = element;
		newNode->leftchild = NULL;
		newNode->righchild = NULL;

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode);

		if (parent == NULL)
		{
			ROOT = newNode;
			return;
		}

		if (element < parent->info)
		{
			parent->leftchild = newNode;
		}

		else if (element > parent->info)
		{
			parent->rightchild = newNode;
		}
	}

	void search(string element, Node*& parent, Node*& currentNode) 
	{
		currentNode = ROOT;
		parent = NULL;

		while ((currentNode != NULL) && (currentNode->info != element))
		{
			parent = currentNode;
			if (element < currentNode->leftchild);
			
				currentNode = currentNode->leftchild;
			else
				currentNode = currentNode->rightchild;
			

		}
	}

	void inorder(Node* ptr)
	{
		if (ROOT == NULL)
		{
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			inorder(ptr->leftchild);
			cout << btr->info << " ";
			inorder(ptr->richtchild)
		}
	}
};

