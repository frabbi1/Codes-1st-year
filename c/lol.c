#include<stdio.h>
int main(){
	
	long int n;
	scanf("%ld", &n);
	
	if( n<=5 ){
		if( n==1 ) printf("Sheldon");
		if( n==2 ) printf("Leonard");
		if( n==3 ) printf("Penny");
		if( n==4 ) printf("Rajesh");
		if( n==5 ) printf("Howard");
	}
	
	else{
		int i,j,k,sum = 0;
		
		for( i=2; ; i=i*2){
			if(n%i != 0 ){
				if( n/i < i ){
					k = j;
					break;
				}
			}
			else{
				k = i;
				break;
			}
			j = i;
		}
		
		for( i=1; i<k; i=i*2 ){
			sum = sum + 5*i;
		}
		
		a = n - sum;
	}
}
