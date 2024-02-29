#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that inserts a node as
 * the right-child of another nodee
 * @parent:  is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return:  return a pointer to the created node, or NULL on failure or
 * if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node =  malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
