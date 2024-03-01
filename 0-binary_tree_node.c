#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node(binary_tree_t *parent, int value);
 * parent: binary_tree_t
 * value: value
 * Return: binary tree
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	int n;
	binary_tree_t *new_tree;

	binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));
	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}