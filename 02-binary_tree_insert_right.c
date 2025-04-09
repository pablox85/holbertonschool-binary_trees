#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - insertar nodo a la derecha
 * @value: valor del nodo
 * @parent: nodo padre
 * Return: nuevo nodo
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nN;

	if (parent == NULL)
		return (NULL);

	nN = binary_tree_node(parent, value);

		if (nN == NULL)
			return (NULL);

	if (parent->right != NULL)
	{
		nN->right = parent->right;
		parent->right->parent = nN;
	}
	parent->right = nN;

	return (nN);
}

*--BEFORE--*

  .--(098)--.
(012)     (402)


*--AFTER--*	
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
