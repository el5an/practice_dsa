#include "doubly_ll.h"

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct doubly_ll
{
    struct Node *head;
    struct Node *tail;

    int size;
};

void print_ll(struct Node* node)
{
    while(node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void print_dll(struct doubly_ll dll)
{
    while(dll.head != NULL)
    {
        printf("%d -> ", dll.head->data);
        dll.head = dll.head->next;
    }
    printf("NULL\n");
}

struct Node* create_new_node(int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    
    return new_node;
}

int add_at_start(struct doubly_ll *dll, int data)
{
    if(dll->size == 0)
    {
        dll->head = create_new_node(data);
        dll->tail = dll->head;
    }
    else
    {
        struct Node* temp = create_new_node(data);

        temp->next = dll->head; // Set new node's right point to the existing node
        dll->head->prev = temp; // Set the existing node's left to the new node

        dll->head = temp; // Set the head to point to the new node
    }

    return dll->size++;
}

int main(void)
{
    struct doubly_ll dll1;

    add_at_start(&dll1, 201);
    add_at_start(&dll1, 202);
    add_at_start(&dll1, 203);
    add_at_start(&dll1, 204);
    add_at_start(&dll1, 205);

    print_dll(dll1);

}