#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,j,k;
    printf("please enter the number of columns that you want:\n");
    scanf("%d",&sayi);
    for (j=1;j<=sayi;j++){
        for(i=1;i<=(sayi-j)*2;i++){
        printf(" ");
        }
        for(k=1;k<=(2*j-1);k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
