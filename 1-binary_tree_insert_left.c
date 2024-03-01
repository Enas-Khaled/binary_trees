#include "binary_trees.h"

/**
 * binary_tree_insert_left - func to insert a node as left
 * 
 *
 * @parent: ptr to the node to insert the left-child 
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node,or NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->n = value;
		if (parent->left != NULL)
		{
			new_node->left = parent->left;
			parent->left = new_node;

		}
		else
			new_node->left = NULL;
		parent->left = new_node;
	}
	return (new_node);
}
