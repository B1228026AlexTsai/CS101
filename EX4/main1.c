#include <stdio.h>

int main()
{
    int n = 7;
    for (int i = 0; i < n + 1; i++){
        for (int j = 0; j < n + 1; j++){
            if (((n + 1) - i )<=  j){
                printf("%d", i);
                printf(" ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
