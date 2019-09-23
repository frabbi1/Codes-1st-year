#include<iostream>
#include<string>

using namespace std;

int main(){
	long int st[2000], m, n;
	string a;
	long int i, j, res=0;
	
	cin>> m>> n;
	for(i=0; i<m; i++){
		scanf("%ld", &j);
		st[j]=1;
	}
	
	for(i=0;i<n;i++){
		scanf("%ld",&j);
		if(st[j]==1) res++;
	}
	cin>> a;
	
	cout<< res;
	
	return 0;
	
}
