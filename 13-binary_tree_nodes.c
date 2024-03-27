#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root node
*
* Return: no. of nodes with at least 1 child in the tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t no_nodes = 0;

	if (!tree)
		return (0);


	no_nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		no_nodes++;

	return (no_nodes);
}
