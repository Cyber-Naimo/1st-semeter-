#include <stdio.h>

int main()
{
    int side1, side2, side3;
    char C;

    /* Input sides of a triangle */
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    C= (side1==side2 && side2==side3 )? /* If all sides are equal */ printf("Equilateral triangle.") /* If any two sides are equal */: (side1==side2 || side1==side3 || side2==side3)?   printf("Isosceles triangle.")/* If none sides are equal */: printf("Scalene triangle.");
    

    return 0;
}
