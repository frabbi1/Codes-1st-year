#include<stdio.h>
int binsrch(int arr[],int l,int r,int x){
	
	if(r>=1){
		int mid= l+(r-l)/2;
		if(arr[mid]==x) return mid;
		if(arr[mid]>x) return binsrch(arr,l,mid-1,x);
		else return binsrch(arr,mid+1,r,x);
	}
	
	return -1;
}
int main(){
	int ar[20],i,j,res,n;
	for(i=0;i<5;i++){
		scanf("%d",&ar[i]);
	}
	printf("Search for:");
	scanf("%d",&n);
	j=sizeof(ar);
	res=binsrch(ar,0,j-1,n);
	
	if(res==-1) printf("SOrry");
	else printf("%d",res);
	return 0;
	
	
}
