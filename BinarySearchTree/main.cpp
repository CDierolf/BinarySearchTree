#pragma once
//This program demonstrates the use of a binary search tree of double values.
// values are inserted based on their value to the left or right of the root and subsequent parent nodes.
// The program then performs a search to look for a specific value in the node and then
// displays the values with inorder processing.
// Christopher K. Dierolf
// 12/9/2017
#include "BinaryTree.h"
#include <iostream>
#include <vector>


using namespace std;

int main()
{

	BinaryTree bt;
	vector<double> values;

	bt.insert(6.3);
	bt.insert(9.67);
	bt.insert(40.2);
	bt.insert(-4.8);
	bt.insert(10.1);
	bt.insert(3.33);
	bt.insert(2.5);

	if (bt.search(9.67))
	{
		cout << "9.67 was found in the tree!\n";
	}
	else
	{
		cout << "9.67 wasn't found in the tree!\n";
	}

	bt.inOrder(values);

	for (int i = 0; i < values.size(); i++)
	{
		cout << values[i] << " ";
	}
	cout << endl;











	return 0;
}