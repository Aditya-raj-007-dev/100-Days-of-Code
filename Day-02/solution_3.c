#include <stdio.h>

int main(){
    
    //-Write a program to calculate the area and perimeter of a rectangle given its length and breadth.**
     
    int length ,breath;

    printf("Enter the length : ");
    scanf("%d",&length);

    printf("Enter the breath : ");
    scanf("%d",&breath);

    printf("The area of rectangle is  : %d \n " , length * breath);

    printf("The perimeter of rectangle is  : %d", 2*(length+breath));

  


     return 0;
}