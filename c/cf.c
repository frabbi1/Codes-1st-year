#include<stdio.h>
int a[30001], t;

void res(int x){
	if(x>t) printf("NO");
	else if(x==t) printf("YES");
	else res(a[x]);
}

int main(){
	
	int n, i, x;
	
	
	scanf("%d %d", &n, &t);
	for( i=1;i<n;i++){
		scanf("%d", &a[i]);
		a[i]=a[i]+i;
	}
	x=a[1];
	res(x);
	
	return 0;
	
}
