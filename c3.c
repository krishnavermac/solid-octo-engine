#include<stdio.h>
int main(void) {
  int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int spc = rows;
    for(int i = 0; i < rows; i++) {
        for(int j = spc; j > 0; j--) {
            printf(" ");
        }
         for(int k = 0; k < rows; k++) {
             if(i==0||i==(rows-1)||k==0||k==(rows-1)) {
                 printf("*  ");
             } else {
                 printf("   ");
             }
         }
        printf("\n");
        spc--;
    }
return 0;
}