#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - altura del arbol
 * @tree: prt al arbol
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t  leftH, rightH, height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	if (leftH > rightH)
	{
		height = leftH;
	}
	else
	{
		height = rightH;
	}

	return (height + 1);
}

