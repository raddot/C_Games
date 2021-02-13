#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char user, char comp)
{
    if(user == comp)
    {
        return 0;
    }
    if(user == 's' && comp == 'g')
    {
        return -1;
    }
    else if(user == 'g' && comp == 's')
    {
        return 1;
    }
    if(user == 's' && comp == 'w')
    {
        return 1;
    }
    else if(user == 'w' && comp == 's')
    {
        return -1;
    }
    if(user == 'w' && comp == 'g')
    {
        return 1;
    }
    else if(user == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    int num;
    char user, comp;
    //comp = 's';
    srand(time(0));
    num = rand()%100 + 1;
    if(num < 33)
    {
        comp = 's';
    }
    else if(num > 33 && num <= 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 's' for snake, 'w' for water and 'g' for gun ->");
    scanf("%c",&user);
    int res = snakeWaterGun(user,comp);
    printf("You choose %c and computer choose %c\n",user,comp);
    if(res == 0)
    {
        printf("Game draw\n");
    }
    else if(res == 1)
    {
        printf("You win");
    }
    else 
    {
        printf("Computer win");
    }
    return 0;
}