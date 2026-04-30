#include<stdio.h>
int main()
{
    int i = 0;
    int j = 0;

    printf("Enter first number: \n");
    scanf("%d", &i);
    printf("Enter first number: \n");
    scanf("%d", &i);

    if (i > j)
    {
        printf("Maximum number is %d \n", i);
    }
    else
    {
        printf("Maximum number is %d  \n", j);
    }
    return 0;

}