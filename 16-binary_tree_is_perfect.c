#include "binary_trees.h"

/**
 * node_depth - Calcula la profundidad de un nodo desde la raíz
 * @node: puntero al nodo
 *
 * Return: profundidad (0 para la raíz)
 */
size_t node_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node && node->parent)
	{
		node = node->parent;
		depth++;
	}

	return (depth);
}

/**
 * is_full - Verifica si un árbol es full
 * @node: puntero al nodo actual
 *
 * Return: 1 si el árbol es full, 0 si no
 */
int is_full(const binary_tree_t *node)
{
	if (node == NULL)
		return (1);

	if ((node->left == NULL && node->right != NULL) ||
	    (node->left != NULL && node->right == NULL))
		return (0);

	return (is_full(node->left) && is_full(node->right));
}

/**
 * is_perfect_recursive - Verifica si un subárbol es perfecto
 * @node: puntero al nodo actual
 * @depth: profundidad actual
 * @expected_depth: profundidad que deberían tener todas las hojas
 *
 * Return: 1 si es perfecto, 0 si no
 */
int is_perfect_recursive(const binary_tree_t *node,
	size_t depth, size_t expected_depth)
{
	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
		return (depth == expected_depth);

	if (node->left == NULL || node->right == NULL)
		return (0);

	return (is_perfect_recursive(node->left, depth + 1, expected_depth) &&
		is_perfect_recursive(node->right, depth + 1, expected_depth));
}

/**
 * binary_tree_is_perfect - Verifica si un árbol binario es perfecto
 * @tree: puntero a la raíz del árbol
 *
 * Return: 1 si el árbol es perfecto, 0 si no
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *leaf;
	size_t expected_depth;

	if (tree == NULL)
		return (0);

	if (!is_full(tree))
		return (0);

	leaf = tree;
	while (leaf->left)
		leaf = leaf->left;

	expected_depth = node_depth(leaf);

	return (is_perfect_recursive(tree, 0, expected_depth));
}

