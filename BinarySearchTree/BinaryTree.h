#pragma once
// Class implmentation file for the Binary Tree.
#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <vector>

using namespace std;

class BinaryTree
{
private:
	struct TreeNode
	{
		double value;
		TreeNode *left;
		TreeNode *right;
		TreeNode(double value1, TreeNode *left1 = nullptr, TreeNode *right1 = nullptr)
		{
			value = value1;
			left = left1;
			right = right1;
		}
	};

	TreeNode *root;
	void insert(TreeNode *&, double);
	bool search(double, TreeNode *);
	void inOrder(vector<double> & v, TreeNode *);
public:
	// Calls the private helper methods to perform operations.
	BinaryTree() { root = NULL; }
	void insert(double x) { insert(root, x); }  
	bool search(double x) { return search(x, root); }
	void inOrder(vector <double> & v) { inOrder(v, root); }

};


#endif