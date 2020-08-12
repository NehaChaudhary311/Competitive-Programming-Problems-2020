//Finding GCD and LCM of two numbers(positive or negative)
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    
    a = a>=0 ? a : -a;
    b = b>=0 ? b : -b;
    int temp_a = a;
    int temp_b = b;
    
    while(a != b){
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    printf("GCD : %d\n", a);
    printf("LCM : %d\n", temp_a*temp_b/a);
    

    return 0;
}
