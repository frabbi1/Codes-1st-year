#include<iostream>
using namespace std;

int main(){
	
	long long i,n,d,yr[101];
	long long a,b;
	
	cin>> n;
	yr[1]=0;
	for(i=2; i<=n; i++){
		cin>> d;
		yr[i]=yr[i-1]+d;
	}
	cin>> a >> b;
	cout<< yr[b]-yr[a];
	
	return 0;
}
