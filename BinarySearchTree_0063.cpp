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
