#include "binary_trees.h"

/**
 * @binary_tree_insert_left: function that inserts a node as the left-child of another node.
 * @parent: parent is a pointer to the node to insert the left-child in.
 * @value: value is the value to store in the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_b_t_node;

	new_b_t_node = malloc(sizeof(binary_tree_t));

	if (new_b_t_node == NULL)
		return (NULL);

    new_b_t_node->n = value;
    new_b_t_node->parent = parent;
    new_b_t_node->left = new_b_t_node->parent->left;
    new_b_t_node->left = value;
    new_b_t_node->right = new_b_t_node->parent->right;
    new_b_t_node->right = value;

    return (new_b_t_node);
}
