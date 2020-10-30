/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
answer :
*/

#include<iostream>

bool isPrime(int n)
{
    for(int i=2,i<n,i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int umpteenthPrime(int n)
{
    std::list<int> primeList;
    int i=2;
    do
    {
        if (isPrime(i) == true)
        {
            primeList.pushback(i);
        }        
    } while (primeList.size()<10001);
    
}

int main()
{
    std::cout << 1 << std::endl;
    return 0;
}
