#include    <stdio.h>
#include    <string.h>
#include    <stdbool.h>

#define N 20

int main(void)
{
    char words[N] = {0,}, smallest_word[N] = {0,}, 
         largest_word[N] = {0,};

    while (1)
    {
        printf("Enter word: ");
        scanf("%s", words);
        if (strlen(smallest_word) == 0)
            strncpy(smallest_word, words, N);
        else {
            if (strcmp(words, smallest_word) < 0)
                strncpy(smallest_word, words, N);
        }
        if (strlen(largest_word) == 0)
            strncpy(largest_word, words, N);
        else {
            if (strcmp(words, largest_word) > 0)
                strncpy(largest_word, words, N);
        }
        if (strlen(words) == 4){
            break;
        }
    }
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest words: %s\n", largest_word);

    return 0;
}
