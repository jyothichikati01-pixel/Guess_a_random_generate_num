#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int num,count=0;
    srand(getpid());
    int r=rand()%100+1;
   do
   {
    printf("Enter your Guess\n");
    scanf("%d",&num);
    printf("\n");
    if(num>r)
    {
       printf("Try a Lower Number\n");
    }
    else if(num<r)
    {
        printf("Try a Higher Number\n");
    }
    else
    {
        printf("You guessed correctly\n");
        printf("%d\n",r);
    }
    count++;
    }while(num!=r);
    printf("Total Attempts:%d\t",count);
    return 0;
}