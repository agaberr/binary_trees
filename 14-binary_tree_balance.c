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
* binary_tree_nodes - measures the balance factor of a binary tree
* @tree: pointer to the root node
*
* Return: tree's balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{

    if (tree == NULL)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

}
