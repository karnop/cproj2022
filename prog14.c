// WAP to calculate coordinate points in XY system and determine in which quad, the point lies.
#include <stdio.h>

int main()
{
    // Input
    int x, y;
    printf("Abscissa : ");  scanf("%d", &x);
    printf("Ordinate : ");  scanf("%d", &y);

    // Algorithm 

    // Output
    if(x > 0 && y > 0)          printf("Point(%d, %d) lies in first quadrant.", x, y);
    else if(x < 0 && y > 0)     printf("Point(%d, %d) lies in second quadrant.", x, y);
    else if(x < 0 && y < 0)     printf("Point(%d, %d) lies in third quadrant.", x, y);
    else if(x > 0 && y < 0)     printf("Point(%d, %d) lies in fourth quadrant.", x, y);
    else                        printf("Point(%d, %d) lies on the origin.", x, y);
}