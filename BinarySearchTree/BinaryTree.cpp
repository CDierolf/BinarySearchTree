#include "BinaryTree.h"
#include <vector>
#include <iostream>

using namespace std;


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
	if (x < tree->value)
	{
		insert(tree->left, x);
	}
	else
	{ 
		insert(tree->right, x);	
	}

}
void BinaryTree::inOrder(vector<double> &v, TreeNode *tree)
{
	if (tree)
	{
		inOrder(v, tree->left);
		v.push_back(tree->value);
		inOrder(v, tree->right);
	}
}