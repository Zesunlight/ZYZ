#include <stdio.h>

int fibonacci( int n);
int main()
{
	int total = 1;
	int number[5] = {1};
	scanf("%d", &total);
	
	int i = 0;
	for ( ; i<total; i++){
		scanf("%d", &number[i]);
	}
	
	for ( i=0; i<total; i++){
		printf("%d\n", fibonacci(number[i]));
	}
	
	return 0;
}

int fibonacci( int n)
{
	int f=1;
	if( n>2){
		f = fibonacci(n-1) + fibonacci(n-2);
	}
	return f;
}
