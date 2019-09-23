#include<stdio.h>
int main( void ){
	
	char op;
	int i, j;
	
	printf( "Enter operation : " );
	scanf( "%d %c %d", &i, &op, &j );
	
	switch( op ){
		case '+' : printf( "%d ", i+j );
			break;
		case '-' : printf( "%d ", i-j );
			break;
		case '/' : printf( "%d ", i/j );
			break;
		case '*' : printf( "%d ", i*j );
			break;
	
	}
	
	return 0;
}	 
