// Check whether the triangle is equilateral, scalene, or isosceles 
#include <stdio.h>
int main()
{
    int a ,b, c ;
    printf("Enter three sides of Triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if ((a==b) && (b==c))
    {
        printf("This is Equilateral Triangle \n");

    }
    else if ((a==b) || (b==c) || (c==a))
    {
        printf("This is Scalene Triangle \n");
    }
    else
    {
        printf("This is Isoseles Triangle \n");
    }
    
    
    return 0;
}
