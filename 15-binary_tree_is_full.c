#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf, return 1 (base case for recursion) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If the current node has both left and right children */
	/* recursively check the subtrees */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	/* If the current node has only one child, the tree is not full */
	return (0);
}
