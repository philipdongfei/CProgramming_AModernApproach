#include    <stdio.h>
#include    <stdlib.h>

struct node {
    int value;
    struct node *next;
};

#if 0
struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur, *prev;

    for (cur = list, prev = NULL;
        cur != NULL && cur->value != n;
        prev = cur, cur = cur->next)
        ;
    if (cur == NULL)
        return list;
    if (prev == NULL)
        list = list->next;
    else 
        prev->next = cur->next;
    free(cur);
    return list;
}
#endif

struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = n;
    new_node->next = list;
    return new_node;
}
struct node *read_number(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for (;;) {
        scanf(" %d", &n);
        if (n == 0)
            return first;
        first = add_to_list(first, n);
    }
}
struct node *search_list(struct node *list, int n)
{
    while (list != NULL && list->value != n)
        list = list->next;
    return list;
}

void print_list(struct node *list)
{
    printf("print_list begin");
    struct node *cur = list;
    while(cur != NULL){
        printf("list: %d\n", cur->value);
        cur = cur->next; 
    }
    printf("print done\n");
}

struct node *delete_from_list(struct node *list, int n)
{
    if (list == NULL)
        return list;
    struct node *prev, *cur;
    prev = list;
    if (prev->value == n)
    {
        list = list->next;
        free(prev);
        return list;
    }
    for (;prev->next != NULL && prev->next->value != n;
            prev = prev->next)
        ;
    if (prev->next == NULL)
        return list;
    if (prev->next != NULL)
    {
        cur = prev->next;
        prev->next = cur->next; 
        free(cur);
    }
    return list;
}

int main(void)
{
    int deln;
    struct node *first = NULL, *cur = NULL, x;
    x.value = 11;
    x.next = NULL;
    printf("(&x)->value: %d, x.value: %d\n", (&x)->value,x.value );
    first = read_number();
    print_list(first);

    printf("Enter the delete number: ");
    scanf(" %d", &deln);
    if (first == NULL)
        printf("before delete first == NULL\n");
    first = delete_from_list(first, deln);
    if (first == NULL)
        printf("first == NULL\n");

    print_list(first);

    while (first != NULL)
    {
        cur = first;
        first = first->next;
        free(cur);
    }
    return 0;
}

