#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - contador de nodos con 1 hijo
 * @tree: ptr al tree
 * Return: cantidad de nodos
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		 return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) +1 );
	}
	else{
		return (0);
	}

}

