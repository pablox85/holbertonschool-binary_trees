#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - chekea si el nodo es root
 * @node: nodo dado
 * Return: algo
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
	{
		return (1);
	}
	else if (node->parent != NULL)
	{
		return (0);
	}
	else
	{
		return (0);
	}

	
}

 .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a root: 1
Is 128 a root: 0
Is 402 a root: 0
