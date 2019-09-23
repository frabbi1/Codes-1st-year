#include<stdio.h>
int main(){
	
	long int n, d[60000], t[60000], max, min;
	long int t1, t2, i;
	long double ans;
	scanf( "%ld", &n );
	max=-1;
	min=1e9;
	for( i=0; i<n; i++ ){
		scanf( "%ld", &d[i]);
		if(d[i]>=max) {
			max=d[i];
			t1=i;
		}
		if( d[i]<=min ) {
			min=d[i];
			t2=i;
		}
	}
	
	for( i=0; i<n; i++ ){
		scanf( "%ld", &t[i] );
	}
	
	ans = (max-min)/(t[t1] + t[t2] );
	
	printf( "%llf", ans );
	
	return 0;
}
	
	

