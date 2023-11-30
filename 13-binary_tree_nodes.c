#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree to count the nodes from
 * Return: number of nodes counted 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	size_t left_count = binary_tree_nodes(tree->left);
	size_t right_count = binary_tree_nodes(tree->right);

	return left_count + right_count + ((tree->left != NULL || tree->right != NULL) ? 1 : 0);
}
