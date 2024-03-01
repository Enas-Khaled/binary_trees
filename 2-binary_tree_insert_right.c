#include "binary_trees.h"

/**
 * binary_tree_insert_right - func to insert a node as left
 *
 *
 * @parent: ptr to the node to insert the left-child
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node,or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent != NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node != NULL)
		{
			new_node->parent = parent;
			new_node->left = NULL;
			new_node->n = value;
			if (parent->right != NULL)
			{
				new_node->right = parent->right;
				parent->right->parent = new_node;
			}
			else
				new_node->right = NULL;
			parent->right = new_node;
		}
	}
	return (new_node);
}
