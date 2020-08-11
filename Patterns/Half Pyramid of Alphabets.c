/*
Enter the number of rows : 5
A
B B
C C C
D D D D
E E E E E
*/

#include <stdio.h>

int main()
{
    int i, j, rows;
    char character_to_be_printed = 'A';
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    if(rows > 0 ){
        for(i = 1; i<=rows;i++){
            for(j=1; j<=i; j++){
                printf("%c", character_to_be_printed);
            }
            character_to_be_printed += 1; 
            printf("\n");
        }
    }
    else{
        printf("Lesser than 0 rows, really?");
    }

    return 0;
}

/* 
Enter an uppercase character you want to print in the last row: E
A
BB
CCC
DDDD
EEEEE

#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}

*/
