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

	ll x[26]={0}, i, j, ln, y[26]={0};
	string st1, st2, st3;
	
	cin >> st1 >> st2 >> st3;
	
	ln = st1.size() + st2.size();
	
	if( ln != st3.size() ) {
		pf("NO");
		return 0;
	}
	ln = st1.size();
	
	for(i=0;i<ln;i++){
		x[st1[i]-'A']++;
	} 
	
	ln = st2.size();
	for(i=0;i<ln;i++){
		x[st2[i]-'A']++;
	}
	
	ln = st3.size();
	for(i=0;i<ln;i++){
		y[st3[i]-'A']++;
	}
	
	for(i=0;i<26;i++){
		if(x[i] != y[i]){
			pf("NO");
			return 0;
		}
	}
	pf("YES");
	
	return 0;
}

