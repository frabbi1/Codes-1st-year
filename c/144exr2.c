#include<stdio.h>
int main(){
	
	int i,j,n = 0,a[10];
		
	for ( i = 0 ; i < 10 ; i++ ){
		
		scanf( "%d", &a[0] );
	
	}
	
	for ( i = 0 ; i < 10 ; i++ ){
		
		for ( j = 9 ; j >=0 ; j-- ){
			
			if ( a[i] == a[j] ) n++;
			
		}
	}
	
	if ( n>0 )
	printf( "matched" );
	else printf( "not matched\n" );
	return 0;
}				
