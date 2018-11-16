
struct node *find_last(struct node *list, int n)
{
    struct node *first = list, *temp = NULL;

    while (first != NULL)
    {
        if (first->value == n)
            temp = first;
        first = first->next;
    }
    return temp;
}
