#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - insertar nodo izquiero
 * @parent: nodo padre
 * @value: valor a almacenar
 * Return: al nuevo nodo
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nN;

	if (parent == NULL)
	{
		return (NULL);
	}
	nN = binary_tree_node(parent, value);
	if (nN == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		nN->left = parent->left;
		parent->left->parent = nN;
	}
	parent->left = nN;

return (nN);
}
