/*
In case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself.
For example: 153 = 1*1*1 + 5*5*5 + 3*3*3 => 153 is an Armstrong number.
*/

//Checking whether the number is prime or not
#include <stdio.h>
#include<math.h>

int isArmstrong(int num){
    int num_of_digits = 0, unit = 0;
    int num_copy  = num;
    while (num != 0) {
        num = num/10;
        num_of_digits += 1;
    }
    int i, sum=0;
    for(i = 1 ; i <= num_of_digits ; i++ ){
        int x = pow(10, i);
        int digit = num_copy % 10;
        num_copy = num_copy / 10;
        printf("Printing unit : %d ", digit);
        sum += pow(digit, num_of_digits);
        
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int res = isArmstrong(num);
    if(res == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    
}
