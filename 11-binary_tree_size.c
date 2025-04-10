#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - tamaÃo del arbol
 * @tree: ptr al arbol
 * Return: suma de nodos
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) +  binary_tree_size(tree->right) + 1);
}
