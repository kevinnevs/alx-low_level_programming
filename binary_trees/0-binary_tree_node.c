#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * RETURN: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct node *tempNode = (struct node*) malloc(sizeof(struct node));
	
	tempNode->n = n;
	tempNode->left = NULL;
	tempNode->right = NULL;

	/** if tree is empty **/
	if(root == NULL) {
		root = tempNode;
	}
	else {
		n = root;
		parent = NULL;

		while(1) {
			parent = n;

		/** go left of the tree **/
		if(n < parent->n) {
			current = current->leftChild;

			/** insert to the left **/
			if(current == NULL) {
				parent->leftChild = tempNode;
				return;
			}
		} /** go right of the tree **/
		else {
			current = current->rightChild;

			/** insert to the right **/
			if(current == NULL) {
				parent->rightChild = tempNode;
				return;
			}
		}
		}
	}
}

