// Q - (Write a program to print the sum of the first n odd numbers.)

#include <stdio.h>

int main(){
    int a , sum=0 ;
    
    printf("Enter the number n :");
    scanf("%d",&a);

     for(int i = 1; i <= a; i+=2) {
       sum=sum + i;

    }

    printf("Sum = %d\n", sum);

     return 0;
}