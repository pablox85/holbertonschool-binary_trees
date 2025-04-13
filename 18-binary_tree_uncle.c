#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to the node to find the uncle for
 *
 * Return: pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

