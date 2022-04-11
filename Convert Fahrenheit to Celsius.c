#include<stdio.h>
int main(){
   float Fahrenheit, Celsius;
   printf("Enter Fahrenheit: \n");
   scanf("%f",&Fahrenheit);
   Celsius = (Fahrenheit - 32)*5/9;
   printf("Celsius: %f \n", Celsius);
   return 0;
}
