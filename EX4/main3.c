#include <stdio.h>

int main()
{
    int y = 1;
    int x = 1;
    for (int i = 1;i <= 81; i++){
        if (i % 9 == 1){
            y = 1;
            printf("\n");
        }
        if (i <= 9){
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 18){
            x = 2;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 27){
            x = 3;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 27){
            x = 4;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 36){
            x = 4;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 45){
            x = 5;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 54){
            x = 6;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 63){
            x = 7;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 72){
            x = 8;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
        else if (i <= 81){
            x = 9;
            printf("%d*%d=%d\t",x,y,x*y);
            y += 1;
        }
      
    }
    return 0;
}
