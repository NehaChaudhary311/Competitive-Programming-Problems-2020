//Checking whether the number is prime or not

#include <stdio.h>
#include<math.h>

int isPrime(int num){
    if(num <= 1)
        return -1;
    if(num == 2)
        return 1;
    if(num%2 == 0)
        return -1;
    int boundary = (int)sqrt(num);
    int i = 0;
    for(i = 3; i <= boundary ; i += 2){
        if(num%i == 0)
            return -1;
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int res = isPrime(num);
    if(res == -1)
        printf("Not prime\n");
    else
        printf("Prime\n");
    
}
