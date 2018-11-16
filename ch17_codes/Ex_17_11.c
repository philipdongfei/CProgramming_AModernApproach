int count_occurrences(struct node *list, int n)
{
    struct node *first = list;
    int count = 0;

    while (first != NULL)
    {
        if (first->value == n)
            count++;
        first = first->next;

    }
    return count;
}
