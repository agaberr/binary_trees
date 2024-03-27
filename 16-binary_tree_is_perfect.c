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
* binary_tree_is_full - checks if a binary tree is perfect
* @tree: pointer to the root node
*
* Return: 1 if the tree is perfect, 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{

    size_t left_height, right_height;

    if (!tree)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height == right_height)
    {
        if (!tree->left && !tree->right)
            return (1);
        else if (tree->left && tree->right)
            return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
    }

    return (0);

}
