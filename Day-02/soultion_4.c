#include <stdio.h>

int main(){
    
    //-Write a program to calculate the area and circumference of a circle given its radius.**
     
    int radius;

    printf("Enter the radius : ");
    scanf("%d",&radius);

  

    printf("The area of circle is  : %f \n " , 3.14* radius*radius);

    printf("The circumferece of circle is  : %f", 2*3.14*radius);

  


     return 0;
}