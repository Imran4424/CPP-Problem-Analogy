/*
    10.15. Write a program that display first n prime numbers using array
*/


#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    printf("Enter the number: ");
    scanf("%d", &n);
    int index = 0;

    printf("prime number is: ", n);

    for(i = 1; index < n; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
        }
        
        if(i == j)
        {
            printf("%d ",i);
            index++;
        }
    }

    return 0;
}