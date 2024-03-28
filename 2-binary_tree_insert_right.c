#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: parent node to insert the right-child in
* @value: value to put in the new node
*
* Return: a pointer to the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	if (parent == NULL)
		return (NULL);

	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	return (NULL);

	right_node->parent = parent;
	right_node->n = value;
	right_node->right = NULL;
	right_node->right = NULL;


	if (parent->right)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);

}
