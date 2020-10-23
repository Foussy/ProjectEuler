/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

answer : 1471
*/

#include <iostream>

int largestPrimeFactor(long long int n)
{
    int i=2;
    do
    {
        if (n%i != 0)
        {
            i++;
        }
        else
        {
            n = n / i;
        }
        
    } while (i*i <= n);
    return i;    
}

int main()
{
    std::cout << largestPrimeFactor(600851475143) << std::endl;
    return 0;
}