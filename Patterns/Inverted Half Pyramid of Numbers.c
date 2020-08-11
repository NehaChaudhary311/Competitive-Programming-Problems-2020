/*
Enter the number of rows : 5
12345
1234
123
12
1
/*

#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    if(rows > 0 ){
        for(i = rows; i >=1;i--){
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
