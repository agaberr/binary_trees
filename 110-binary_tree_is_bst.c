#include "binary_trees.h"

/**
* is_valid - check if the node is valid or not
* @tree: pointer to the root node
* @min: min value
* @max: max value
*
* Return: 1 if tree is a valid BST, and 0 otherwise
*/

int is_valid(const binary_tree_t *tree, int min, int max)
{

    if (!tree)
        return (1);
    
    if (tree->n <= min || tree->n >= max)
        return (0);
    
    return is_valid(tree->left, min, tree->n) && is_valid(tree->right, tree->n, max);

}

/**
* binary_tree_is_bst - check if the node is valid or not
* @tree: pointer to the root node
*
* Return: 1 if tree is a valid BST, and 0 otherwise
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
    return (is_valid(tree, -9999, 9999));
}
