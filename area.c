#include<stdio.h>
void main()
{
#define PI 3.149
float CR,HT,BH,Areacr,TR;
printf("Enter the Radius of the circle:");
scanf("%f",&CR);
printf("Enter the height of the triangle:");
scanf("%f",&HT);
printf("Enter the base of the triangle:");
scanf("%f",&BH);
Areacr=PI*CR*CR;
TR=BH*HT/2;
printf("The area of the circle is= %f",Areacr);
printf("The area of the triangle is= %f",TR);
