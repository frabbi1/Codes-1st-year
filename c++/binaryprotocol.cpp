#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll n, i, p=0, num=0;
	string s;
	
	cin >> n >> s;
	
	for(i=0;i<n;i++){
		if(s[i]=='1') num++;
		else{
			num=num*10;
		}
	}
	cout << num;
	
	return 0;
	
}

