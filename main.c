#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
    int seconds, hours, minutes;

    printf("input a seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600; 
    seconds %= 3600; 

    minutes = seconds / 60; 
    seconds %= 60;

    printf("시간(시:분:초): %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
