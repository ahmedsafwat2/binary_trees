#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_sub_tree;

	new_sub_tree = malloc(sizeof(binary_tree_t));
	if (new_sub_tree == NULL)
		return (NULL);
	new_sub_tree->n = value;
	new_sub_tree->parent = parent;
	new_sub_tree->left = NULL;
	new_sub_tree->right = NULL;

	return (new_sub_tree);
}
