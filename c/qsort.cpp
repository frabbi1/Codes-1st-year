#include<stdio.h>
void swap( int *a, int *b ){
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp ;
}
int part(int *p, int s, int e){
	
	int i;
	for( i=s; i<e; i++ ){
		if( p[i]>=p[e] ) swap( &p[i], &p[e] );
	}
	swap( &p[i],&p[e] );
	
	return i;
	
}



void sort( int *p, int l, int h ){
	if( l<h ){
		int pi = part( p, l, h );
		sort( p, l, pi-1 );
		sort( p, pi+1, h );
	}
}
int main(){
	//int a[5]= { 2, 3, 5, 1, 4};
	int i;
//	printf("%d", sizeof(a)/sizeof(int) );
	sort( a, 0, sizeof(a)/sizeof(int)-1 );
	for(i=0; i<5; i++){
		printf("%d", a[i]);
	}
	
	return 0;
}
