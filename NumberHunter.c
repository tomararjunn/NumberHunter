#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // generate random number between 1 to 100
                               // printf("THE NUMBER IS %d\n", number);
    //  DO WHILE LOOP TO KEEP RUNNING THE LOOP
    printf("******GUESS A NUMBER BETWEEN 1 TO 100********\n");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("LOWER NUMBER PLEASE!\n");
        }
        else if (guess < number)
        {
            printf("HIGHER NUMBER PLEASE!\n");
        }
        else
        {
            printf("YOU HAVE GUESSED IN %d ATTEMPTS\n", nguesses);
        }
        if(guess != number)
        nguesses++;
    } while (guess != number);
    return 0;
}