#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node. If node is NULL or the parent is NULL,
 * return NULL. If node has no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node is NULL or the parent is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Check if node is the left child and return the right sibling */
	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);

	/* Check if node is the right child and return the left sibling */
	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);

	/* If node has no sibling, return NULL */
	return (NULL);
}
