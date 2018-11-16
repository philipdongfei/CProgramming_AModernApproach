

int main(void)
{
    struct node *cur, *p;
    for (p = first; p != NULL; ) 
    {
        cur = p;
        p = p->next;
        free(cur); 
    }

    p = first;
    while (p != NULL) {
        cur = p;
        p = p->next;
        free(cur);
    }
}
