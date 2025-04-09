#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_node - nuevo nodo al arbol
 * @parent: nodo padre
 * @value: valor a almacenar
 * Return: al nodo nuevo
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nN;

	nN = malloc(sizeof(binary_tree_t));

	if (nN == NULL)
	{
	return (NULL);
	}

	nN->n = value;
	nN->parent = parent;
	nN->left = NULL;
	nN->right = NULL;

	return (nN);
}
*-- Added node 12->006->016 && 402<-256<-512--*
.-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
