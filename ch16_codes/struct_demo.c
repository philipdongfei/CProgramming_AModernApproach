#include    <stdio.h>
#include    <string.h>

#define NAME_LEN 25

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
} part1 = {.number = 528, .name = "Disk drive", .on_hand = 10},
  part2 = {914, "Printer cable", 5};

void print_part(struct part p)
{
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);

}
struct part build_part(int number, const char* name, int on_hand)
{
    struct part p;

    p.number = number;
    strcpy(p.name, name);
    p.on_hand = on_hand;
    return p;
}

int main(void)
{
    print_part(part1);
    print_part(part2);
    part1 = build_part(529, "USB cable", 100);

    part2 = part1;

    print_part(part1);
    print_part(part2);
    print_part((struct part){530, "Book", 299});

    struct part inventory[100] = 
            {[0].number = 531, [0].on_hand = 20, [0].name[0] = '\0'};
    print_part(inventory[0]);

    return 0;

}
