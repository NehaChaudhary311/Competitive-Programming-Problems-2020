/*
Enter the number of rows : 6
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5
*/

#include<stdio.h>

long factorial(int n)
{
          int c;
          long int result = 1;
          for (c = 1; c <= n; c++)
                   result = result*c;
          return result;
}
int main()
{
          int row, c, n, temp;
          printf("Enter the number of rows : ");
          scanf("%d",&n);
          temp = n;
          for ( row = 0 ; row < n ; row++ )
          {
            //for spacing
            for ( c = 1 ; c < temp ; c++ )
                     printf(" " );

            temp--;
            /* for printing numbers */
            for ( c = 0 ; c <= row ; c++ )
                     printf("%ld ",factorial(row)/(factorial(c)*factorial(row-c)));
            printf("\n");
          }
 }
