#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,n_guesses=1; 
    srand(time(0));
    number=rand()%100 + 1;
    //printf("The number is -> %d\n",number);
    do
    {
        printf("Please guess the number ->\n");
        scanf("%d",&guess);
        if(guess > number)
        {
            printf("Guess lower...\n");
        }
        else if (guess < number)
        {
            printf("Guess higher...\n");
        }
        else
        {
            printf("You guessed it right in %d turns!!!\n",n_guesses);
        }
        n_guesses++;
    } while (guess != number);
    
    return 0;
}