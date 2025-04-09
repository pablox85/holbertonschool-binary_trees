#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - profundidad
 * @tree: ptr al arbol
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	if (tree == NULL || (tree->left == NULL && tree->right == NULL)
			return (0);

			while (tree->parent != NULL)
			{
			tree = tree->parent;
			depth++;
			}
}
