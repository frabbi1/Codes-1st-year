#include<stdio.h>
int main(){
	int a=10;
	int c=11;
	
	swap( &a, &c);
	printf("%d %d", a, c );
	
	return 0;
}
