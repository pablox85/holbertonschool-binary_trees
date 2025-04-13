#include "binary_trees.h"
/**
 * binary_tree_is_full - verificar si el arbol esta lleno
 * @tree: prt al arbol
 * Return: 1 full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	else
		return (0);

}
