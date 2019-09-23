#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	int n, one=0, zro=0;
	string s;
	
	cin >> n >> s;
	
	for(int i=0; i<n; i++){
		if(s[i]=='1') one++;
		else zro++; 
	}
	
	if(one==zro) cout << "0";
	else if(one>zro) cout << one-zro;
	else cout << zro-one;
	
	return 0;
}



