#include "singly_ll.h"

struct Node 
{
    int data;
    struct Node *next;
};

struct singly_ll
{
    struct Node *head;
    struct Node *tail;
    int size;    
};

void print_ll(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL \n");
}

void print_sll(struct singly_ll sll)
{
    while (sll.head != NULL)
    {
        printf("%d -> ",sll.head->data);
        sll.head = sll.head->next;
    }
    printf("NULL\n");
}

struct Node* create_new_node(int data)
{
    struct Node* create_new_node = (struct Node*)malloc(sizeof(struct Node));
    create_new_node->data = data;
    create_new_node->next = NULL;

    return create_new_node;
}

int add_at_start(struct singly_ll *sll, int data)
{
    if(sll->size == 0)
    {
        sll->head = create_new_node(data);
        sll->tail = sll->head;

        sll->size = 1;
    }
    else
    {
        struct Node* temp = create_new_node(data);
        temp->next = sll->head;
        sll->head = temp;

        sll->size++;
    }
    return sll->size;
}

int add_at_end(struct singly_ll *sll, int data)
{
    if(sll->size == 0)
    {
        sll->tail = create_new_node(data);
        sll->head = sll->tail;

        sll->size = 1;
    }
    else
    {
        sll->tail->next = create_new_node(data);
        sll->tail = sll->tail->next;
        
        sll->size++;
    }
    return sll->size;
}

int remove_at_start(struct singly_ll *sll)
{
    if(sll->size == 0)
    {
        printf("SLL is empty\n");
        return -1;
    }
    else
    {
        struct Node* temp = sll->head;

        sll->head = sll->head->next;

        free(temp);
        return sll->size--;
    }
}

int remove_at_end(struct singly_ll *sll)
{
    int val;

    struct Node* prev = sll->head;

    if(sll->size == 0)
    {
        printf("SLL is empty\n");
        return -1;
    }
    else
    {
        while(prev->next != sll->tail)
        {
            printf("%d ", prev->data);
            prev = prev->next;
        }
        printf("\n");
        val = sll->tail->data;
        free(sll->tail);  
        printf("Value removed %d\n", val);

        sll->tail = prev;   
        sll->tail->next = NULL;

        printf("Tail points at %d\n", sll->tail->data);

        sll->size--;

        return val;
    }
}

int main(void)
{
    struct singly_ll sll;
    struct singly_ll sll2;
    struct Node *head;
    struct Node *tail;

    printf("Hello, World!\n");

    sll.head = create_new_node(10);
    sll.tail = sll.head;
    
    sll.tail->next = create_new_node(120);
    sll.tail = sll.tail->next; 

    sll.tail->next = create_new_node(130);
    sll.tail = sll.tail->next;

    print_ll(sll.head); 
    
    sll2.head = create_new_node(110);
    sll2.head->next = create_new_node(20);

    print_ll(sll2.head);  

    struct singly_ll sll3;

    add_at_start(&sll3, 301);

    print_ll(sll3.head);

    add_at_start(&sll3, 302);

    print_ll(sll3.head);   
    
    add_at_end(&sll3, 303);

    print_ll(sll3.head);

    add_at_end(&sll3, 304);

    print_ll(sll3.head);  
    
    print_sll(sll3);

    add_at_end(&sll3, 305);
    print_sll(sll3);

    remove_at_start(&sll3);
    print_sll(sll3);

    printf("SLL Head: %d\n", sll3.head->data);    
    printf("SLL Tail: %d\n", sll3.tail->data);

    remove_at_end(&sll3);
    print_sll(sll3);
}