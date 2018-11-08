#include    <stdio.h>
#include    <ctype.h>
#include    <string.h>

void reverse_name(char *name);

int main(void)
{
    char ch = '\0', *pch;
    char name[64] = {0};
    pch = name;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) != '\n')
    {
        *pch++ = ch;
    }
    reverse_name(name);
    printf("%s\n", name);
                
#if 0
    while ((ch = getchar()))
    {
        if (ch != ' ')
        {
            if (pos == 0)
            {
               ch2 = ch; 

                ++pos;
            }
        }
        else
        {
            if (pos > 0)
                break;
        }
        //printf("%c", ch);
        
    }
    printf("\n");

    while ((ch1 = getchar()) != '\n')
    {
        if (ch1 != ' ')
        {
            printf("%c", ch1);

        }
    }
    printf(", %c.\n", ch2);
#endif

    return 0;
}

void reverse_name(char *name)
{
    char *pword = name;
    char fname[32] = {0}, lname[32] = {0};
    char *pfname = fname, *plname = lname;
    int i = 0;

    while(*pword != '\0')
    {
        if (*pword != ' ')
        {
            if (i == 0)
                i++;
            if (i == 1)
                *(pfname++) = *pword;
            else if (i == 2)
                *(plname++) = *pword;
        }
        else {
            if (i == 1)
                i++;
        }
        pword++;

    }
    strcpy(name, lname);
    strcat(name, ", ");
    char First[2] = {0};
    First[0] = toupper(*fname);
    strcat(name, First);
    strcat(name, ".");

}
