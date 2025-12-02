#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Description: If parent already has a right-child, the new node takes its
 * place, and the old right-child becomes the right-child of the new node.
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Create the new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* If parent already has a right child */
	if (parent->right != NULL)
	{
		/* New node takes the place of old right child */
		new_node->right = parent->right;
		/* Update old right child's parent to be the new node */
		parent->right->parent = new_node;
	}

	/* Set new node as parent's right child */
	parent->right = new_node;

	return (new_node);
}
