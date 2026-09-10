#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j,k,l;
    printf("please enter the number of rows that you want:\n");
    scanf("%d",&rows);
    for (j=1;j<=rows;j++){
        for(i=1;i<=(rows-j);i++){
        printf("  ");
        }
        for(k=j;k<=(2*j-1);k++){
            printf("%d ",k);
        }
        for(l=(2*j-2);l>=j;l--){
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}
