#include<stdio.h>
int main(){
	
	int n,p,q,x[200],y;
	int i,j, fl=0;
	
	scanf("%d",&n);
	scanf("%d", &p);
	
	for(i=0; i<p; i++){
		scanf("%d", &x[i]);
	}
	
	scanf("%d", &q);
	
	for(j=p; i<p+q; j++){
		scanf("%d", &x[j]);
	}
	
	for(i=0; i<p+q; i++){
		for(j=i+1;j<p+q;j++){
			if(x[i]>x[j]){
				y=x[i]+x[j];
				x[i]=y-x[i];
				x[j]=y-x[i];
			}
		}
	}
	
	for(i=0;i<p+q;i++){
		printf("%d ", x[i] );
	}
	
	/*for(i=1;i<=n;i++){
		for(j=0;j<p+q;j++){
			if(i==x[j]){
				fl=0;
				break;
			}
			else fl = 1;
		}
		if( fl==1 ) break;
	}
	
	if( fl==0 ) printf("I become the guy.");
	if( fl==1 ) printf("Oh, my keyboard!");
	*/
	return 0;
}
