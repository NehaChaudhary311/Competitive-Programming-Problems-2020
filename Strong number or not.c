/*
Strong number is a special number whose sum of factorial of digits is equal to the original number. For example: 145 is strong number.
*/

//Checking whether the number is strong or not
#include <stdio.h>
#include<math.h>

int factorial(int num){
    if(num == 0)
        return 1;
    else
        return(factorial(num-1)*num);
}
int isStrong(int num){
    int num_of_digits = 0;
    int num_copy  = num;
    
    //Calculating the number of digits
    while (num != 0) {
        num = num/10;
        num_of_digits += 1;
    }
    
    int i, sum=0;
    
    //Calculating sum
    for(i = 1 ; i <= num_of_digits ; i++ ){
        
        int digit = num_copy % 10;
        num_copy = num_copy / 10;
        sum += factorial(digit);
        
    }
    return sum;
}


int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int res = isStrong(num);
    if(res == num)
        printf("Strong\n");
    else
        printf("Not Strong\n");
    
}
