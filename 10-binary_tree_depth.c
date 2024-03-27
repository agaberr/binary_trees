#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a binary tree
* @tree: pointer to the root node
*
* Return: If tree is NULL, your function must return 0
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{

    // if (!tree)
    //     return (0);

    // size_t left_height;
    // size_t right_height;

    // left_height = binary_tree_depth(tree->left);
    // right_height = binary_tree_depth(tree->right);

    // if (left_height > right_height)
    //     return (left_height + 1);
    // else
    //     return (right_height + 1);

}

int main(void)
{
    binary_tree_t *root;
    size_t depth;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    depth = binary_tree_depth(root);
    printf("Depth of %d: %lu\n", root->n, depth);
    depth = binary_tree_depth(root->right);
    printf("Depth of %d: %lu\n", root->right->n, depth);
    depth = binary_tree_depth(root->left->right);
    printf("Depth of %d: %lu\n", root->left->right->n, depth);
    return (0);
}