#include <stdio.h>

int main()
{
    double pi = 0.0;
    int count = 1;

    for (int i = 1; i < 300000; i += 2) { // 分母為奇數遞增
        if (count % 2 == 0) {
            pi -= 4.0 / i;  // 確保浮點數除法
        } else {
            pi += 4.0 / i;
        }
        count += 1;
    }

    printf("Pi approximation: %.5f\n", pi);
    return 0;
}
