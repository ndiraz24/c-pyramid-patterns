#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,j;
    printf("please enter the number of rows that you want to create:\n");
    scanf("%d",&sayi);
    printf("\n");
    for (i=sayi;i>=1;i--){
            for (j=1;j<=i;j++){
                printf("%d ",j);
            }
            printf("\n");

    }
    return 0;
}
