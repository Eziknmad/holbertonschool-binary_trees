#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: In-order traversal visits nodes in this order:
 * 1. Left subtree
 * 2. Current node (root)
 * 3. Right subtree
 *
 * Return: Nothing (void)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* 1. Traverse left subtree FIRST */
	binary_tree_inorder(tree->left, func);

	/* 2. Process current node (IN-order, in the middle) */
	func(tree->n);

	/* 3. Traverse right subtree LAST */
	binary_tree_inorder(tree->right, func);
}
