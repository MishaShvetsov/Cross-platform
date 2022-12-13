#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

float state = 0.1;

// RANDOM

float rand_float(float max)
{
    state = 1.9 * MIN(state, 1 - state);
    return state;
}

int fnr(int z)
{
    return (float)z * rand_float(1);
}

int tabs(int tab)
{
    for (int i = 0; i < tab; i++)
    {
        printf(" ");
    }
}

// --------------- //

char r[7][30] = {
    "A POT OF GOLD",
    "A BEAUTIFUL MAIDEN",
    "A MAN EATING TIGER",
    "nNOTHING",
    "$22.59",
    "A ROLLS ROYCE",
};

char s[7][40] = {
    "OPEN SESAME!",
    "C-R-E-E-E-E-E-A-A-K!",
    "WA LAH!",
    "TA-DAH!",
    "ABRACADABRA!",
    "CLICK !!!",
    "SURPRISE!"};

int end_game()
{

    while (1)
    {
        char start[5];
        char end[5];
        scanf("%s %s", start, end);
        if (strcmp(start, "YES") == 0 && strcmp(end, "SIR!") == 0)
        {
            printf("\n");
            return 1;
        }
        else if (strcmp(start, "NO") == 0 && strcmp(end, "SIR!") == 0)
        {
            return 0;
        }
        else
        {

            printf("HEY, I DIDN'T JUST FALL OFF A TURNIP TRUCK, YA KNOW!!!!!\n");
        }
    }
}

int input_key()
{
    int K2;
    scanf("%i", &K2);
    return K2;
}

int input_q()
{
    char Q;
    scanf("%s", Q);
}
/*
int test_main()

{
    printf("random: %f \n", random(42));
    printf("fnr: %i \n", fnr(21));
    printf("fnr: %i \n", fnr(21));
    printf("fnr: %i \n", fnr(21));
    printf("fnr: %i \n", fnr(21));
    printf("sizeof: %i \n", sizeof(uint32_t));
}
*/

int main()
{

    while (1)
    {

        tabs(27);
        printf("DOORS\n");
        tabs(20);

        printf("CREATIVE COMPUTING\n");
        tabs(18);
        printf("MORRISTOWN, NEW JERSEY\n");
        printf("\n");
        printf("\n");
        printf("\n");

        int K[6];

        int D = 1;
        int T = 10 + fnr(21);
        int N = 3 + fnr(3);
        int K3 = 8 + fnr(5);

        printf("THERE ARE %i LOCKED DOORS AND THERE ARE %i KEYS(0-%i)\n", N, K3, K3 - 1);
        printf("\n YOU WILL HAVE %i TRIES TO OPEN THEM ALL\n", T - 1);
        printf("\n (SOME KEYS MAY OPEN MORE THAN ONE DOOR) \n");

        for (int X = 0; X <= N; X++)
        {
            K[X] = fnr(K3);
        }
        while (1)
        {
            T = T - 1;
            if (T == 0)
            {
                printf("YOU LOSE,  THE REST OF THE KEYS ARE:\n");
                for (int X = D; X <= N; X++)
                {
                    printf("\nDOOR %i KEY %i", X, K[X - 1]);
                }
                break;
            }

            printf("TRIES LEFT = %i           DOOR # %i KEY\n", T, D);
            tabs(1);
            printf("\n");
            int K2 = input_key();
            // printf("\n%i\n",K[D-1]);
            if (K2 != K[D - 1])
            {
                continue;
            }
            printf("%s\n", s[fnr(7)]);
            D += 1;

            if (D < N + 1)
            {
                continue;
            }
            printf("\n");
            printf("YOU DID IT, BEHIND DOOR # %i IS...........................\n", N);
            printf("%s !!\n", r[fnr(7)]);
            break;
        }
        printf("\nDO YOU WANT TO PLAY AGAIN (YES SIR! OR NO SIR!)?\n)");
        switch (end_game())
        {
        case 1:
            continue;

        case 0:
            return 0;
        }
    }
}