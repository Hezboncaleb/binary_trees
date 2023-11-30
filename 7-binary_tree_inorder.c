#include "binary_trees.h"

/**
 * binary_tree_inorder - A binary tree using inorder traversal
 * @tree: A pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	
	binary_tree_inorder(tree->left, func);
	func(tree->value);
	binary_tree_inorder(tree->right, func);
