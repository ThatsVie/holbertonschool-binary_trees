#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf, return 1 (base case for recursion) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Check if the left and right subtrees are perfect */
	/* and have the same height */
	if (left_height == right_height)
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

	/* If the heights are not the same, the tree is not perfect */
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return the maximum height of left or right subtree */
	/* plus 1 for the current node */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
