#include "binary_trees.h"

/**
 * binary_tree_is_full - function that says if a tree is full or not and returns.
 * a tree is full if it has tow or none children and if it has.
 * @tree: tree to check if it is full.
 * Return: 1 if it is a full 0 if not a full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node = 0, right_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left_node = binary_tree_is_full(tree->left);
			right_node = binary_tree_is_full(tree->right);
			if (left_node == 0 || right_node == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
