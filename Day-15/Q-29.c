// Q -- Write a program to calculate the factorial of a number.


#include <stdio.h>

// Calls itself

#include <stdio.h>

// Calls itself

long long factorial(int);

    //Factorial (5) = 1x2x3x4x5
    //Factorial (6) = 1x2x3x4x5x6
    //Factorial (4) = 1x2x3x4
    //Factorial (n) = 1x2x3x4x5 ... x n-1 X n
    // Factorial (n-1) = 1x2x3x4x5... x (n-1)
               //IT MEANS
    // Factorial (n) = Factorial(n-1) X n
    
    long long factorial (int n){

        if(n == 1 || n==0 ){
            return 1;
        }
          // Factorial (n) = Factorial(n-1) X n
        return factorial(n-1) * n;

    
}


int main()
{

    int a;

    printf("THe value of a is :");
    scanf("%d",&a);
    
    printf("The factorial of %d is %lld ", a , factorial (a));

    return 0;
}

