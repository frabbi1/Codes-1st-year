#include<stdio.h>
int main(){
	
	int x1[30],x2[30];
	int n,cnt=0, i,j;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d %d", &x1[i],&x2[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(x2[i]==x1[j] && i!=j){
				cnt++;
			}
		}
	}
	
	printf("%d",cnt);
	return 0;
}
