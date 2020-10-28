/*
2520 is the smallest number that can be divided
by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly
divisible by all of the numbers from 1 to 20?

answer : 232792560
*/

#include<iostream>

int smallestDiv(int n)
{
    int flag = 1;
    int num = n;  
    do
    {
        flag = 0;
        num++;
        for (int i = 1; i < n+1; i++)
        {
            if (num % i != 0)
            {
                flag++;
                break;
            }              
        }
    } while (flag != 0);    
    return num;
}

int main()
{
    std::cout << smallestDiv(20) << std::endl;
    return 0;
}