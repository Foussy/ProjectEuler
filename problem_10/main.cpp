/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

answer :
*/

#include<iostream>

bool isPrime(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag++;
            break;
        }
    }        
    if (flag != 0)
    {
        return false;
    }
    else
    {
        return true;
    }     
}

long long int sumPrimes(int n)
{
    int i=2;
    long long int sum;
    do
    {
        if (isPrime(i) == true)
        {
            sum += i;
            std::cout << i << std::endl;
        }
        i++;        
    } while (i < n);
    return sum;
}

int main()
{
    std::cout << sumPrimes(1000) << std::endl;
    return 0;
}