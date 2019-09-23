#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cstdio>
#include<cctype>
#include<cmath>

using namespace std;

typedef long long ll;
#define pf printf
#define sf scanf
int main(){
	
	int n, m, s=0, i, x, p=0;
	cin >> n >> m;
	for(i=0;i<n;i++){
		cin>> x;
		s=s+x;
		if(s>m){
			p++;
			s=x;
		}
		else if(s==m) {
			p++;
			s=0;
		}
	
	}
	if(s!=0) p++;
	cout<< p;
	
	return 0;
}

