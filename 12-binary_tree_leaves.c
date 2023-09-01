#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
    if (tree->left == NULL && tree->left == NULL)
    {
        return (1);
    }
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}