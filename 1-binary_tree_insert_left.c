#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: parent node to insert the left-child in
* @value: value to put in the new node
*
* Return: a pointer to the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

    binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

    if (left_node == NULL || parent == NULL)
    return NULL;

    left_node->parent = parent;
    left_node->n = value;
    left_node->left = NULL;
    left_node->right = NULL;


    if (parent->left)
    {
        left_node->left = parent->left;
        parent->left->parent = left_node;
    }
    
    parent->left = left_node;

    return left_node;

}
