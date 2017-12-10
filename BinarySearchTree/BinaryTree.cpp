// Class Definition File for the Binary Tree.
#include "BinaryTree.h"
#include <vector>
#include <iostream>

using namespace std;

// Performs a search on the tree.
bool BinaryTree::search(double x, TreeNode *)
{
	TreeNode *tree = root;
	while (tree)
	{
		if (tree->value == x)
			return true;
		else if (x < tree->value)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return false;
}
// Inserts new values iteratively. Defines the private insert function but calls the public insert function
// to insert the value into the tree based on its value.
void BinaryTree::insert(TreeNode *& tree, double x)
{
	if (!tree)
	{
		tree = new TreeNode(x);
		return;
	}
	//If number is already in the tree
	if (tree->value == x)
	{
		return;
	}
	if (x < tree->value) // number is less than the parent node, goes the the left.
	{
		insert(tree->left, x);
	}
	else	// number is greater than the parent node, goes to the right.
	{ 
		insert(tree->right, x);	
	}

}
//Loads the values of the tree in-order into the vector.
void BinaryTree::inOrder(vector<double> &v, TreeNode *tree)
{
	if (tree)
	{
		inOrder(v, tree->left);
		v.push_back(tree->value);
		inOrder(v, tree->right);
	}
}