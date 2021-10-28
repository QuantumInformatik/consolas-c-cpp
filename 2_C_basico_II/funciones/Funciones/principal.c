#include <math.h>
#include <stdio.h>
#include "number.h"

int main()
{
    int n, cont, i;
    printf("How many prime do you want to see? \n");
    scanf("%d", &n);


    int min = pow(-2,sizeof(int)*8-1);
    int max = pow(2,sizeof(int)*8-1)-1;

    printf("Size of int: %d bytes o %d bits \nMin=%d, Max=%d\n",sizeof(int),sizeof(int)*8,min ,max);

    long minLong = pow(-2,sizeof(long)*8-1);
    long maxLong = pow(2,sizeof(long)*8-1)-1;

    printf("Size of long: %d bytes o %d bits \nMin=%d, Max=%d\n",sizeof(long),sizeof(long)*8,minLong ,maxLong);

    double minDouble = pow(-2,sizeof(double)*8-1);
    double maxDouble = pow(2,sizeof(double)*8-1)-1;

    printf("Size of double: %d bytes o %d bits \nMin=%.0lf, Max=%.0lf\n",sizeof(double),sizeof(double)*8,minDouble ,maxDouble);


    cont = 0;
    i = 1;

    while (cont < n)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
            cont = cont + 1;
        }

        i = i + 1;
    }

    return 0;
}
