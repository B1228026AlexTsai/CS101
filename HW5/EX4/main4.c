#include <stdio.h>

int main()
{
    int num = 0;
    int i = 12345; // 原始數字
    // 提取各位數
    int tt = i / 10000;           // 萬位
    int th = (i / 1000) % 10;     // 千位
    int h = (i / 100) % 10;       // 百位
    int t = (i / 10) % 10;        // 十位
    int n = i % 10;               // 個位

    // 重組數字，交換千位與個位
    num = tt * 10000 + n * 1000 + h * 100 + t * 10 + th * 1;

    printf("%d\n", num); // 輸出結果

    return 0;
}
