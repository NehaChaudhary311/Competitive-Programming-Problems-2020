/*
Enter number of rows : 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/


#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    //rows entered by the user need to be greater than 0
    if(rows > 0 ){
        for(i = 1; i<=rows;i++){
            for(j=1; j<=i; j++){
                printf("%d", j);
            }
            printf("\n");
        }
    }
    else{
        printf("Lesser than 0 rows, really?");
    }

    return 0;
}
