#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("input the second : ");
	scanf("%i",&a);
	
	printf("%i seconds -%i:%i\n",a, a/60, a%60);
	
	system("PAUSE");

    return 0;
}
