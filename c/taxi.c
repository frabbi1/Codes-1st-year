#include<stdio.h>
int main(){
	long int n,x[100001];
	long int i,j,c1,c2,c3,c4;
	long int n1,n2;
	
	c1=c2=c3=c4=0;
	scanf("%ld",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&x[i]);
		if(x[i]==1) c1++;
		if(x[i]==2) c2++;
		if(x[i]==3) c3++;
		if(x[i]==4) c4++;
	}
	c2=c2*2;
	n1=c2/4;
	c2=c2%4;
	if(c2!=0)
	{
	c1=c1+c2;
	if(c1<4){
		n=n1+c3+1+c4;
	}
	else if(c1>=4){
		n2=c1/4;
		c1=c1%4;
		if(c1<=c3) n=n1+n2+c3+c4;
		if(c1>c3) n=n1+n2+c3+1+c4;
	}
	}
	if(c2==0){
		if(c1<=c3) n=c4+c3+n1;
		if(c1>c3) {
			c1=c1-c3;
			if(c1%4==0) n=c4+c3+n1+(c1/4);
			else n=c4+c3+n1+(c1/4)+1;
		}
	}
	printf("%ld",n);
	return 0;
}
