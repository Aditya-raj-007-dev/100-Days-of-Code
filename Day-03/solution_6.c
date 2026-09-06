#include <stdio.h>

int main(){
    //Write a program to swap two numbers using a third variable.
 
    int a,b,c;
   

      printf("Enter the Number a  : ");
    scanf("%d",&a);

      printf("Enter the Nummber b : ");
    scanf("%d",&b);
   

    printf("The original numbers are : a= %d \n b = %d\n",a,b);

    c=a; // if a=5 then made  c=5
    a=b; // if b=3 then a = 3   the first one will be the one change into 2nd one
    b=c; // then b=5


    printf("The swapped numbers are: a=%d \n b=%d \n", a,b);

     return 0;
}