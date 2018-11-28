/* Modifies a file of part records by setting the quantity
 * on hand to zero for all records
 */
#include    <stdio.h>
#include    <stdlib.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
}inventory[MAX_PARTS];

int num_parts;

int main(void)
{
    FILE *fp;
    int i;

    for (i = 0; i < MAX_PARTS; i++)
    {
        inventory[i].number = i;
        sprintf(inventory[i].name, "%d", i);
        inventory[i].on_hand = i;
    }
    if ((fp = fopen("inventory.dat","wb")) == NULL) {
        fprintf(stderr, "Can't create inventory file\n");
        exit(EXIT_FAILURE);
    }
    if (fwrite(inventory, sizeof(inventory[0]), sizeof(inventory)/sizeof(inventory[0]), fp) != MAX_PARTS) {
        fprintf(stderr, "Can't write block data in the inventory file\n");
        exit(EXIT_FAILURE);
    }
    fclose(fp);

    if ((fp = fopen("inventory.dat", "rb+")) == NULL) {
        fprintf(stderr, "Can't open inventory file\n");
        exit(EXIT_FAILURE);
    }

    num_parts = fread(inventory, sizeof(struct part),
            MAX_PARTS, fp);

    for (i = 0; i < num_parts; i++)
        inventory[i].on_hand = 0;

    rewind(fp);
    fwrite(inventory, sizeof(struct part), num_parts, fp);
    fclose(fp);

    return 0;
}
