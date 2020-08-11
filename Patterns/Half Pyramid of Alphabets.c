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
