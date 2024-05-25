#include <stdio.h>

int fib(int n){
	return n <= 1 ? n:
		(fib(n - 1) + fib(n - 2));
}

int main(){
	int x;
	printf("Insert value: ");
	scanf("%d", &x);
	printf("%d\n", fib(x));
	return 0;
}
