#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Check if the current node is a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	/* Recursively calculate the height of the left subtree */
	left = binary_tree_height(tree->left);
	
	/* Recursively calculate the height of the right subtree */
	right = binary_tree_height(tree->right);
	
	/* Return the maximum height of the left or right subtree */
	/* plus 1 for the current node */
	return (1 + (left > right ? left : right));
}
