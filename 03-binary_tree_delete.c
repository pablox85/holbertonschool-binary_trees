#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - borra nodos
 * @tree: puntero al root para borrar
 * Return: algo
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

.-------(098)--.
(012)--.       (128)--.
     (054)          (402)
