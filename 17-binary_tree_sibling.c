#include "binary_trees.h"

/** 
 * binary_tree_sibling - It Finds the sibling of a node in a binary tree
 *
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		sibling = node->parent->right;
	if (node->parent->right == node)
		sibling = node->parent->left;

	return (sibling);
}
