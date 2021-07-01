//  C program to find the greatest number among three numbers
// try by yourself and let me know have a nice day dostoo

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the Greatest Number\n", a);
        }
        else
        {
            printf("%d is the Greatest Number\n", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("%d is the Greatest Number\n", b);
        }
        else
        {
            printf("%d is the greatest Number\n", c);
        }
    }
    else
    {
        printf("All are Same Numbers \n");
    }
    return 0;
}
