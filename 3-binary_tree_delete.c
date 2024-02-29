#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - It deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}

	free(tree);
}