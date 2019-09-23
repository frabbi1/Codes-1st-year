#include<stdio.h>
#include<string.h>
int main(){
	
	int c=0, i,j,l;
	int ab[26];
	char st[1001];
	
	gets(st);
	
	for(i=0;i<26;i++) ab[i]=0;
	
	l=strlen(st);
	for(i=1; i<l-1; i=i+3){
		for(j=0;j<26;j++){
			if(st[i]==('a'+j)){
				ab[j]++;
				break;
			}
		}
	}

	
	for(i=0;i<26;i++){
		if(ab[i] != 0 ) c++;
	}
	
	printf("%d",c);
	
	return 0;
}
