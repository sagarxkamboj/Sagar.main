#include<stdio.h>

#include<conio.h>

void main()

{

float km,m,feet,inch,cm;

printf("Enter the distance between two cities(in km) - ");

scanf("%f",&km);

m = km*1000;

feet= km*3280.84;

inch=km*39370.1;

cm=km*100000;

printf("\nDistance in kilometres = %f ",km);

printf("\nDistance in metres = %f ",m);

printf("\nDistance in feet = %f ",feet);

printf("\nDistance in inches = %f ",inch);

printf("\nDistance in centimetres = %f ",cm);

getch();

}