#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	size_t left_height;
	size_t right_height;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}

/**
* main - Entry point
* @void: take void
*
* Return: None.
*/

int main(void)
{
	binary_tree_t *root;
	size_t height;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	height = binary_tree_height(root);
	printf("Height from %d: %lu\n", root->n, height);
	height = binary_tree_height(root->right);
	printf("Height from %d: %lu\n", root->right->n, height);
	height = binary_tree_height(root->left->right);
	printf("Height from %d: %lu\n", root->left->right->n, height);
	return (0);
}
