#include "binary_trees.h"

/**
 * node_depth - Calculates the depth of a node from the root
 * @node: pointer to the node
 *
 * Return: depth (0 for root)
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
 * is_full - Checks if a binary tree is full
 * @node: pointer to the current node
 *
 * Return: 1 if full, 0 otherwise
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
 * is_perfect_recursive - Checks if a subtree is perfect
 * @node: pointer to the current node
 * @depth: current depth
 * @expected_depth: depth all leaves should have
 *
 * Return: 1 if perfect, 0 otherwise
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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
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

