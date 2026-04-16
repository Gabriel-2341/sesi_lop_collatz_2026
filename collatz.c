#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n, r, p = 0;
	printf("Escreva um número.\n");
	scanf("%d", &n);
	while(n != 1){
		printf("%d -> ", n);
		r = n % 2;
		if(r != 0){
			n = ( n * 3 ) + 1;
		} else {
			n = n / 2;
		}
		p = p + 1;
	}
	printf("1\n");
	printf("%d passos.", p);
	getch();
}