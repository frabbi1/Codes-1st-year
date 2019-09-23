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
	int n, d, n0=0, n5=0, i, x;
	
	cin >> n;
	for(i=0;i<n;i++){
		cin >> d;
		if(d==5) n5++;
		else n0++;
	}
	
	if(n0==0) pf("-1");
	else if(n5/9!=0){
		for(i=0;i<(n5/9)*9;i++) pf("5");
		for(i=0;i<n0;i++) pf("0");
	} 
	else pf("0");
	
	return 0;
}

