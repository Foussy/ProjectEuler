/*
The sequence of triangle numbers is generated 
by adding the natural numbers. 
So the 7th triangle number would be :
 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. 

The first ten terms would be:
1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first
 seven triangle numbers:
    1: 1
    3: 1,3
    6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28

We can see that 28 is the first triangle 
number to have over five divisors.

What is the value of the first triangle 
number to have over five hundred divisors?

answer : 76576500
*/

#include<iostream>
#include<vector>
#include <stdio.h>



long long int triangleNumber(int divisors)
{
    long long int numDivisors = 0;
    long long int triangle = 0, k = 0;
    do
    {
        k++; numDivisors = 0; triangle += k;
        for (long long int i = 1; i < triangle / 2 + 1; i++)
        {
            if (triangle % i == 0)
            {
                numDivisors++;
            }            
        }
        printf("triangle : %d -- number of divisors : %d \n", triangle, numDivisors);
    } while (numDivisors <= divisors);  
    return triangle;
}

int main()
{   
    int divisors = 500;
    printf("The first triangle to have %d divisors is d = %d", divisors, triangleNumber(divisors));
    return 0;
}

