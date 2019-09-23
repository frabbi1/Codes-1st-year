#include<stdio.h>
int main(){
	long long int t,i,j,k;
	scanf("%lld",&t);
	
	for(i=1;i<=t;i++){
		scanf("%lld",&j);
		for(k=1;;k++){
			if((k*(k-3))/2>j) break;
		}
		printf("%lld\n",k-1);
	}
	return 0;
}
