#include<stdio.h>
int main()
{
    int length,breath,area,perimeter;

    printf("Enter the length:");
    scanf("%d", &length);

    printf("Enter the breath:");
    scanf("%d", &breath);

    perimeter = 2*(length + breath);
    printf("Perimeter of the rectangle is %d \n", perimeter);

    area = length*breath;
    printf("Area of rectangle is %d", area);

    return 0;
}