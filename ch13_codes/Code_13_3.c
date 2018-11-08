/* Deals a random hand of cards. */

#include    <stdbool.h> /* C99 only */
#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13


int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9',
                                't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};
    const char *rank_name[16] = {"two", "three", "four", "five", "six", 
    "seven", "eight", "nine", "ten", "jack", "queen", "king", "ace"};
    const char *suit_name[16] = {"clubs", "diamonds", "hearts", "spades"};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:\n");
    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;    /* picks a random suit */
        rank = rand() % NUM_RANKS;    /* picks a random rank */
        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c ", rank_code[rank], suit_code[suit]);
            printf("(%s of %s)\n", rank_name[rank], suit_name[suit]);
        }
    }
    printf("\n");

    return 0;
}

