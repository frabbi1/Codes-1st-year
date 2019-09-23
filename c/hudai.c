#include<stdio.h>
int main(){
	
	int h, a[100000], b[100000];
	int l[100001], r[100001];
	int m,x,i,pos,p;
	
	l[0]=r[0]=0;
	scanf("%d", &h);
	for(i=0;i<h;i++){
		scanf("%d %d", &a[i], &b[i]);
		l[0]=l[0]+a[i];
		r[0]=r[0]+b[i];
	}
	m=l[0]-r[0];

	if(m<0) m=-1*m;
	p=m;
	for(i=1;i<=h;i++){
		l[i]=l[0]-a[i-1]+b[i-1];
		r[i]=r[0]-b[i-1]+a[i-1];
		x=l[i]-r[i];
		printf("%d\n",i);
		if(x<0) x=-1*x;
		if(x>m) {
			m=x;
			pos=i;
		}
		if(m==p) printf("0");
		else printf("%d",pos);
		
		return 0;
	}
}
