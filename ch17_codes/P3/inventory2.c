/* Maintains a parts database (linked list version) */

#include    <stdio.h>
#include    <stdlib.h>
#include    <stdbool.h>
#include    "readline.h"

#define NAME_LEN 25

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL;  /* points to first part */

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
bool delete(void);

int main(void)
{
    char code;

    for(;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while(getchar() != '\n') /* skips to end of line */
            ;
        switch(code) {
            case 'i': insert();
                      break;
            case 's': search();
                      break;
            case 'u': update();
                      break;
            case 'p': print();
                      break;
            case 'e': delete();
                      break;
            case 'q': return 0;
            default: printf("Illegal code\n");

        }
        printf("\n");
    }
}

/*
 * find_part: Looks up a part number in the inventory
 *          list. Returns a pointer to the node
 *          containing the part number; if the part
 *          number is not found, returns NULL.
 */
struct part *find_part(int number)
{
    struct part *p;

    for (p = inventory;
        p != NULL && number > p->number;
        p = p->next)
        ;
    if (p != NULL && number == p->number)
        return p;
    return NULL;
}

/*
 * insert: Prompts the user for information about a new
 *         part and then inserts the part into the
 *         inventory list; the list remains sorted by
 *         part number. Prints an error message and
 *         returns prematurely if the part already exists
 *         or space could not be allocated for the part.
 */
void insert(void)
{
    struct part *cur, *prev, *new_node;

    new_node = malloc(sizeof(struct part));
    if (new_node == NULL) {
        printf("Database is full; can't add more parts.\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);

    for (cur = inventory, prev = NULL;
        cur != NULL && new_node->number > cur->number;
        prev = cur, cur = cur->next)
        ;
    if (cur != NULL && new_node->number == cur->number) {
        printf("Part already exists.\n");
        free(new_node);
        return;
    }

    printf("Enter part name: ");
    read_line(new_node->name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = cur;
    if (prev == NULL)
        inventory = new_node;
    else
        prev->next = new_node;
}

void search(void)
{
    int number;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != NULL) {
        printf("Part name: %s\n", p->name);
        printf("Quantity on hand: %d\n", p->on_hand);
    } else
        printf("Part not found.\n");
}

void update(void)
{
    int number, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    p = find_part(number);
    if (p != NULL) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        p->on_hand += change;

    }else
        printf("Part not found.\n");
}

bool delete(void)
{
    int number, change;
    struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);
    struct part *prev, *cur;
    for (cur = inventory, prev = NULL;
        cur != NULL && cur->number != number;
        prev = cur, cur = cur->next)
        ;
    if (cur == NULL)
        return false;
    if (prev == NULL)
        inventory = inventory->next;
    else
        prev->next = cur->next;
    free(cur);
    return true; 
}
void print(void)
{
    struct part *p;

    printf("Part number    Part Name                "
            "Quantity on Hand\n");
    for (p = inventory; p != NULL; p = p->next)
        printf("%7d     %-25s%11d\n", p->number, p->name,
                p->on_hand);
}


