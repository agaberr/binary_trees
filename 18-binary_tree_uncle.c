#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: pointer to the root node
*
* Return: pointer to the uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *uncle;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		uncle = node->parent->parent->right;
	else
		uncle = node->parent->parent->left;

	return (uncle);

}
