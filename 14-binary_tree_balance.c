#include <stdlib.h>
#include "binary_trees.h"
/**
 * get_height - trae la altura
 * @tree: ptr a tree
 * Return: solo dios sabe
 */

static size_t get_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = get_height(tree->left);
	right = get_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_balance - balance del nodo
 * @tree: ptr a tree
 * Return: le seguimos rezando porque todo funcione
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = get_height(tree->left);
	right = get_height(tree->right);

	return ((int)(left - right));
}
