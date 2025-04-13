#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - chekea si el nodo es leaf
 * @node: el nodo
 * Return: 1 true - 0 false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);

}
/*
 .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a leaf: 0
Is 128 a leaf: 0
Is 402 a leaf: 1
*/
