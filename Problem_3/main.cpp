/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

answer : 6857
*/

#include <iostream>

long long int largestPrimeFactor(long long int n)
{
    long long int i=2;
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
    } while (i <= n);
    return i;    
}

int main()
{
    std::cout << largestPrimeFactor(600851475143) << std::endl;
    return 0;
}
