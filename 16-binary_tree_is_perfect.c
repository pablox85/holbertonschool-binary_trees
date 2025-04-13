#include "binary_trees.h"

/**
 * is_perfect_recursive - Verifica si un subárbol es perfecto
 * @node: puntero al nodo actual
 * @depth: profundidad actual del nodo
 * @expected_depth: profundidad que deberían tener todas las hojas
 *
 * Return: 1 si el subárbol es perfecto, 0 si no
 */
int is_perfect_recursive(const binary_tree_t *node,
	size_t depth, size_t expected_depth)
{
	if (node == NULL)
		return (1);

	if (binary_tree_is_leaf(node))
		return (depth == expected_depth);

	if (!node->left || !node->right)
		return (0);

	return (is_perfect_recursive(node->left, depth + 1, expected_depth) &&
		is_perfect_recursive(node->right, depth + 1, expected_depth));
}

/**
 * binary_tree_is_perfect - Verifica si un árbol binario es perfecto
 * @tree: puntero al nodo raíz del árbol
 *
 * Return: 1 si el árbol es perfecto, 0 si no
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *leaf = tree;
	size_t expected_depth;

	if (tree == NULL)
		return (0);

	if (!binary_tree_is_full(tree))
		return (0);

	while (leaf && !binary_tree_is_leaf(leaf))
		leaf = (leaf->left) ? leaf->left : leaf->right;

	expected_depth = binary_tree_depth(leaf);

	return (is_perfect_recursive(tree, 0, expected_depth));
}

