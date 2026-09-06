#include <stdio.h>

int main(){
    
    //-Write a program to convert temperature from Celsius to Fahrenheit.**
     
    int celcius;

    printf("Enter the temperature : ");
    scanf("%f",&celcius);

  
printf("The conversion is : %f", (celcius * 9.0 / 5) + 32);  // focuses "C" to go for the floting point by 9.0 instead taking as integer there

  //  printf("The  conversion is : %f", (celcius*1.8)+32);

     return 0;
}