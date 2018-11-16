#include    <stdio.h>
#include    <string.h>
#include    <stdlib.h>
#include    "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 30
struct oneline{
    char word[MAX_WORD_LEN+1];
    struct oneline *next;
}*pline, *plast;
char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
    //voidline[0] = '\0';
    pline = plast = NULL;
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    struct oneline *new = malloc(sizeof(struct oneline));
    strcpy(new->word, word);
    new->next = NULL;
    if (num_words > 0) {
        plast->next = new;
        line_len++;
    }
    else 
        pline = new;
    plast = new;
    line_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i, j;
    struct oneline *p;

    extra_spaces = MAX_LINE_LEN - line_len;
    for (p = pline; p != NULL; p = p->next){
        printf("%s", p->word);
        if (p->next == NULL) break;
        spaces_to_insert = extra_spaces / (num_words - 1);
        for (j = 1; j <= spaces_to_insert + 1; j++)
            putchar(' ');
        extra_spaces -= spaces_to_insert;
        num_words--;
    }
    putchar('\n');
}

void flush_line(void)
{
    struct oneline *p;
    for (p = pline; p != NULL; p = p->next)
        printf("%s%s", p->word, p->next ? " ": "");
}


