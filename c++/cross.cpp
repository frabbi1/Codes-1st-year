#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	string st[301];
	int i, j, n;
	int fl=0;
	
	cin>> n;
	
	for(i=0;i<n;i++){
		cin>> st[i];
	}
	int x=ceil(n/2.0);
	char p=st[0][0];
	char q=st[0][1];

	if(p==q) fl=0;

	else{
	
	for( i=0; i<x-1; i++){
		if(p==st[i][i] && p==st[i][n-i-1]) fl=1;
		else {
			fl=0;
			break;
		}
	}
	if(st[x-1][x-1] != p) fl=0;
	for(i=x;i<n;i++){
		if(!(p==st[i][i] && p==st[i][n-i-1])) fl=0;
	
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j!=i && j!=n-1-i && st[i][j] != q) fl=0;
		}
	}
	}
	if(fl) cout<<"YES";
	else cout<< "NO";
	
	return 0;
}
