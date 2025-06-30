#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/// @brief Structure to hold the node of a doubly linked list
struct Node;

/// @brief Structure for the doubly linked list, including head, tail, and size.
struct doubly_ll;

/// @brief Prints the doubly linked list from the node passed
/// @param node 
void print_ll(struct Node* node);

/// @brief Prints the doubly linked list
/// @param dll 
void print_dll(struct doubly_ll dll);

/// @brief Creates a new node
/// @param data Node value
struct Node* create_new_node(int data);

/// @brief Adds a new node at the start of the doubly linked list with data as value
/// @param dll 
/// @param data 
/// @return returns the size of doubly linked list
int add_at_start(struct doubly_ll *dll, int data);


/// @brief Adds a new node at the end of the doubly linked list with data as value
/// @param dll 
/// @param data 
/// @return returns the size of doubly linked list
int add_at_end(struct doubly_ll *dll, int data);


/// @brief Removes the first node of the doubly linked list
/// @param dll 
/// @return Returns the value removed
int remove_at_start(struct doubly_ll *dll);

/// @brief Removes the last node of the doubly linked list
/// @param dll 
/// @return Returns the value removed
int remove_at_end(struct doubly_ll *dll);