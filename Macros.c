#include<stdio.h>

#define PI 3.1415

int main()

{

    float radius,area;

    printf("Plese Enter the radius ");

    scanf("%f", &radius);

    //Here used the value  of PI

    area = PI*radius*radius;

    printf("Area=%.2f",area);

    return 0;

}