#include<stdio.h>
int main(){
	
	int n,p[100000];
	int i,c=1;
	
	scanf("%d", &n );
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<n-1;i++){
		if(p[i]!=p[i+1]) c++;
	}
	printf("%d",c);
	return 0;
	
}
