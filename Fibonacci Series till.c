
//Printing Fibonacci series till a number n
#include <stdio.h>

void printFibonacci(int range){
    int a = 0, b = 1, sum = 0;
    while(sum <= range)
    {
        printf("%d ", sum);
        // swap elements
        a = b; 
        
        b = sum;
        
        // next term is the sum of the last two terms
        sum = a + b;  
    }
}


int main()
{
    int range;
    printf("Enter the range n : ");
    scanf("%d", &range);
    printFibonacci(range);
    
    return 0;
}
