#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/// @brief Structure to hold the node of a singly linked list
struct Node;

/// @brief Structure for the singly linked list, including head, tail, and size.
struct singly_ll;

/// @brief Prints the singly linked list from the node passed
/// @param node 
void print_ll(struct Node* node);

/// @brief Prints the singly linked list
/// @param sll 
void print_sll(struct singly_ll sll);

/// @brief Creates a new node
/// @param data Node value
struct Node* create_create_new_node(int data);

/// @brief Adds a new node at the start of the singly linked list with data as value
/// @param sll 
/// @param data 
/// @return returns the size of singly linked list
int add_at_start(struct singly_ll *sll, int data);


/// @brief Adds a new node at the end of the singly linked list with data as value
/// @param sll 
/// @param data 
/// @return returns the size of singly linked list
int add_at_end(struct singly_ll *sll, int data);


/// @brief Removes the first node of the singly linked list
/// @param sll 
/// @return Returns the value removed
int remove_at_start(struct singly_ll *sll);

/// @brief Removes the last node of the singly linked list
/// @param sll 
/// @return Returns the value removed
int remove_at_end(struct singly_ll *sll);