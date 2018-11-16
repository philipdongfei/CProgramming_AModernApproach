int compare_parts(const void *p, const void *q)
{
    return strcmp(((struct part *)q)->name, 
                  ((struct part *)p)->name);

}
