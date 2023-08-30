#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor.
 * @tree: A pointer to the root node of the tree to measure .
 *
 * Return: If tree is NULL, return 0, else return .
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - Measures the height.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: If tree is NULL, your function must return 0,.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		else
			left = 1;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		else
			right = 1;

		return ((left > right) ? left : right);
	}
	return (0);
}
