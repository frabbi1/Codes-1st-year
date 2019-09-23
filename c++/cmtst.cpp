#include<iostream>
#include<algorithm>

using namespace std;

long int ar[100000];
int main(){
	long int t,i,j;
	long int n,x[100001],y[100001],ans;
	
	cin>> t;
	for(i=0;i<t;i++){
		cin>> n;
		ans=0;
		for(j=0;j<n;j++){
			cin>> ar[j];
		}
		sort(ar,ar+n);
		y[1]=ar[n-1];
		x[1]=y[1]-ar[0];
		
		for(j=2;j<n;j++){
			ans=ans+x[j-1];
			y[j]=ans+ar[n-j];
			x[j]=y[j]-y[j-1];
		}
		cout<< ans+x[j-1]<< endl;
	}
	return 0;
} 
