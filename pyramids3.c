#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,j,k;
    printf("please enter the rows that you want to create:\n");
    scanf("%d",&rows);
    printf("\n");
    for(j=1;j<=rows;j++){
        for(k=1;k<=j;k++){
            printf("%d ",k);
        }

        printf("\n");
    }
    return 0;
}
