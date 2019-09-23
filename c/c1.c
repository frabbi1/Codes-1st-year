#include<stdio.h>
int main(){
	int t,n,i,j,k;
	long int l,x[100000],a,e,sum;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		sum=0;
		scanf("%d%ld",&n,&l);
		for(j=0;j<n;j++){
			scanf("%ld",&x[j]);
		}
		
	
		for(j=0;j<n;j++){
			sum=sum+x[j];
		}
		for (j = 0; j < n; j++){
        	for (k = j + 1; k < n; k++){
    			if (x[j] < x[k]){
                a =  x[j];
                x[j] = x[k];
                x[k] = a;
            	}
        	}
    	}
    	e=x[0];
    	for(j=0;j<n;j++){
    		if(sum<=l){
    			printf("%d\n",n);
    			break;
			}
    		else if((sum-e)<=l){
			 printf("%d\n",n-j-1);
			 break;
			}
			else e=e+x[j+1];
		}

	return 0;
}
