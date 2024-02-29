#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree using
 * pre-order traversal
 * @tree: the root
 * @func: is a pointer to function that print the value
 * Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
