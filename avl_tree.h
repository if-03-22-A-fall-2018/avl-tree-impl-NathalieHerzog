#ifndef BALANCEDTREE_AVL_TREE_H
#define BALANCEDTREE_AVL_TREE_H

#include "node.h"

/**
 * Left rotates the subtree rooted with the given node
 * @param node The root of the subtree
 * @return The new root of the subtree
 */
Node rotate_left(Node node);

/**
 * Inserts a new node (with the given key) in the subtree rooted with the given node
 * @param node The root of the subtree
 * @param key The key of the new node
 * @return Pointer to the (new) root node
 * @note This is a recursive function
 */
Node insert(Node node, int key);

int 	max (int n1, int n2);
Node 	rotate_right (Node node);
Node 	rotate_left (Node node);
int 	get_balance (Node node);
Node 	insert (Node node, int key);
void 	print_postorder (Node node);
Node 	unbalanced_insert (Node root, int key);

#endif //BALANCEDTREE_AVL_TREE_H
