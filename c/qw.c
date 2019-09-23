#include<stdio.h>
int main( void ){
	
	char str[80];
	
	printf( "Enter letters ,, anything else to stop " );
	scanf( "%[^wub]", str );
	
	printf( str );
	
	return 0;
}	 
