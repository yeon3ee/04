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
    
    // printf �Լ��� ����� �� ���� ���ڿ��� �ϳ����� �մϴ�.
    // "y=%d"�� "m=%d"�� ���� ����ؾ� �մϴ�.

    printf("y=%d, m=%d", y, m);

    return 0;
}
