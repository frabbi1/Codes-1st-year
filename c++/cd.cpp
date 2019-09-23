#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string st;
	char jk[10], jl[10];
	long long m,n,i,j,k=0;
	
	cin>> m >> n;
	for(i=0;i<m;i++) cin>> jk[i];
	jk[i]='\0';
	
	for(i=0;i<n;i++) cin>> jl[i];
	jl[i]='\0';
	
	cin>> st;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(jk[i]==jl[j]) k++;
		}
	}
	
	cout<< k;
	return 0;
	
}
