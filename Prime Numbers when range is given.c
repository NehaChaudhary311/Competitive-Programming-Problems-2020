//Printing Prime Numbers when range is given
#include <stdio.h>

void printPrimeNumbers(int low, int high){
    if(low>=2)
    {
        int n, prime, i;
        printf ("Prime Numbers are : ");
        for (n = low + 1; n < high; n++)
        {
            prime = 1;
            for (i = 2; i < n/2; i++)
                if (n % i == 0)
                {
                    prime = 0;
                    break;
                }
            if (prime)
                printf ("%d , ", n);
        }
    }
    else
    {
        printf("Lower limit should be greater than 1");
    }
    
}



int main ()
{
    int low, high;
    printf ("Enter lower limit : ");
    scanf ("%d", &low);
    printf ("Enter upper limit : ");
    scanf ("%d", &high);
    printPrimeNumbers(low, high);
    
}

