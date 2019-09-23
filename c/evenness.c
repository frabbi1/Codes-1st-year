#include<stdio.h>
#include<string.h>
int main(){
	char st[1001];
	int i,n=0,j,k;
	
	gets(st);
	j=strlen(st);
	
	for(i=1;i<j-1;){
		for(k=i+3;k<j-1;k=k+3){
			if(st[i] != st[k]) n++;
			if(st[i]==st[k]) {
				i=k;
				break;
			}
		}
	}
	
	printf("%d",n);
	return 0;
}
