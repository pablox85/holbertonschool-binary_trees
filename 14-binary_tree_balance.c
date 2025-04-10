#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - check if tree us balanced
 * @tree: puntero a tree
 * Return: nose
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}

