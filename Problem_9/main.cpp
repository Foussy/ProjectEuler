/*
A Pythagorean triplet is a set of three natural numbers, 
a < b < c, for which, a² + b² = c²

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which
 a + b + c = 1000.

Find the product abc.

answer : 31875000
*/

#include<iostream>
#include<cmath>
#include<vector>

std::vector <int> pythagoreanTriplet()
{
    int a,b = 0;
    do
    {
        a = 1, b++;
        do
        {            
            a++;
        } while (a + b + sqrt(a*a + b*b) < 1000);
    } while (a + b + sqrt(a*a + b*b) != 1000);
    return { a, b}; 
}

int main()
{
    std::vector <int> vec = pythagoreanTriplet();
    int result = vec[0]*vec[1]*sqrt(vec[0]*vec[0] + vec[1]*vec[1]);
    std::cout << vec[0] << std::endl;
    std::cout << vec[1] << std::endl;
    std::cout << sqrt(vec[0]*vec[0] + vec[1]*vec[1]) << std::endl;
    std::cout << result << std::endl;
    return 0;
}