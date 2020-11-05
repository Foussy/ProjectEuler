/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

answer : 142913828922
*/

#include<iostream>
#include<vector>
#include<numeric>

std::vector <int> primeList;

bool isPrime(int n)
{
    int flag = 0;
    for (auto prime : primeList)
    {
        if(n % prime == 0)
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
    int i=3;
    long long int sum;
    do
    {
        if (isPrime(i) == true)
        {
            primeList.push_back(i);
            std::cout << i << std::endl;
        }
        i += 2;        
    } while (i < n);

    for (auto prime : primeList)
    {
        sum += prime;
    }  
    return sum;
}

int main()
{
    primeList.push_back(2);
    std::cout << sumPrimes(2000000) << std::endl;
    return 0;
}