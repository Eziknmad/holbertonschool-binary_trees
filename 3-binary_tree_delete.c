#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Uses post-order traversal (left, right, root) to ensure
 * children are deleted before their parent. If tree is NULL, do nothing.
 *
 * Return: Nothing (void)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Base case: if tree is NULL, do nothing */
	if (tree == NULL)
		return;

	/* First, delete the left subtree (recursive call) */
	binary_tree_delete(tree->left);

	/* Then, delete the right subtree (recursive call) */
	binary_tree_delete(tree->right);

	/* Finally, delete the current node (root of this subtree) */
	free(tree);
}
