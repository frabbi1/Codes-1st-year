#include<stdio.h>
#include<stdlib.h>

int s[100001];

void bin(){
	int i,p=0;
	int cnt , fl;
	for(i=1; i<=100000; i++){
		cnt= __builtin_popcount(i);
		fl= prime(cnt);
		if( fl ) {
			p++;
			s[i-1]=p;
		}
		else s[i-1]=p;
	}

}

int prime(int z){
	int i,flg=0;
	
	if(z==3 || z==5 || z==7 || z==11 || z==13 || z==2) return 1;
	else return 0;
	
}

int main(){
	int t,a,b,intgr,i;
	
	scanf("%d",&t);
	bin();
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		if(a!=1)
			intgr=s[b-1]-s[a-2];
		if(a==1) intgr=s[b-1];	
		printf("%d\n",intgr);
	}
	return 0;
}
