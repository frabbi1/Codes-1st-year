#include<stdio.h>
int main(){
	int k,i,a,b,t,j,fl;
	
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&k);
		if(k%2!=0) printf("-1\n");
		else{
		
		a=k/2;
		b=k/2;
		for(j=2;j<a/2;j++){
			fl=1;
			if((2*(a-j))==(b+j)) break;
			else fl=0;
		}
		if(fl) printf("%d %d %d\n", j-1,a-j+1,b+j-1);
		else printf("-1\n");
	}
}
return 0;
}
