#include<stdio.h>
int main()
{
    int a,b,c,h,d,perimeter,area;

    printf("Enter the first side: ");
    scanf("%d", &a);

     printf("Enter the secound side: ");
    scanf("%d", &b);

     printf("Enter the third  side: ");
    scanf("%d", &c);

        perimeter = a+b+c;
        printf("Perimeter is %d\n",perimeter);

    printf("*****************************************************************************\n");

     printf("Enter the height of the triangle: ");
    scanf("%d", &h);

     printf("Enter the base: ");
    scanf("%d", &d);
    
    area = 0.5 *h*d;
    printf("Area of the triangle is %d\n",area);

    return 0;

}