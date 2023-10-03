#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int x, y, z, m;
    int a, b, c;
    x = 2;
    z = 1;
    a = 3;
    b = 4;
    c = 5;

    // y = ax^2 + bx + c
    y = a * x * x + b * x + c;
    m = (x + y + z) / 3;
    
    // printf 함수를 사용할 때 형식 문자열은 하나여야 합니다.
    // "y=%d"와 "m=%d"를 따로 출력해야 합니다.

    printf("y=%d, m=%d", y, m);

    return 0;
}
