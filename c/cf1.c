#include<stdio.h>
int main(){
	
	int a,b,i,c;
	
	scanf( "%d %d", &a, &b );
	
	c=a;
	
	for( i=0;;i++ ){
		
		c=c+a/b;
		if( a/b == 0) break;
		a=a/b;
	}
	
	printf( "%d", c );
	
	return 0;
}		
