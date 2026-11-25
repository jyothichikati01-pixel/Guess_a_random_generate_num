#include<stdio.h>
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int sub(int a,int b)
{
    int sub;
    sub=a-b;
    return sub;
}
int mul(int a,int b)
{
    int mul;
    mul=a*b;
    return mul;
}
float div(int a,int b)
{
    float div;
    div=(float)a/b;
    return div;
}
int main()
{
    int num1,num2;
    char choice;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Enter choice:\n");
    scanf(" %c",&choice);
    switch(choice)
    {
        case '+':
        { 
            int a=add(num1,num2);
            printf("Addition=%d",a);
            break;
        }
        case '-':
        {
            int s=sub(num1,num2);
            printf("Subtraction=%d",s);
            break;
        }
        case '*': 
        {
            int m=mul(num1,num2);
            printf("Multiplication=%d",m);
            break;
        }
        case '/':
        {
            if(num2==0)
            {
                printf("Div by zero is not possible \n");
                break;
            }
            else
            {
               float d=div(num1,num2);
               printf("Division=%f",d);
               break;
            }
        }
        default : printf("Invalid Operator");
    }
}