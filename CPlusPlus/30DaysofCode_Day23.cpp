// 30DaysofCode_Day23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

class Node {
public:
	int data;
	Node *left, *right;
	Node(int d) {
		data = d;
		left = right = NULL;
	}
};
class Solution {
public:
	Node * insert(Node* root, int data) {
		if (root == NULL) {
			return new Node(data);
		}
		else {
			Node* cur;
			if (data <= root->data) {
				cur = insert(root->left, data);
				root->left = cur;
			}
			else {
				cur = insert(root->right, data);
				root->right = cur;
			}
			return root;
		}
	}

	void levelOrder(Node * root) {
		//Write your code here
		
		queue<Node*> myQ;
		Node* currentNode = root;

		if (currentNode != NULL)
		{
			myQ.push(currentNode);

			while (!myQ.empty())
			{
				 currentNode = myQ.front();

				 cout << currentNode->data << " ";

				 myQ.pop();

				 if (currentNode->left != NULL)
					 myQ.push(currentNode->left);

				 if (currentNode->right != NULL)
					 myQ.push(currentNode->right);
			}
		}
	}

};//End of Solution

int main() {
	Solution myTree;
	Node* root = NULL;
	int T, data;
	cin >> T;
	while (T-->0) {
		cin >> data;
		root = myTree.insert(root, data);
	}
	myTree.levelOrder(root);

	cin.get();
	cin.get();
	return 0;
}

