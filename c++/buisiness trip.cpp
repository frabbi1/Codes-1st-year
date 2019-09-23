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
typedef long double ld;
#define pf printf
#define sf scanf
int main(){
	int k, x[12], i, ans=0;
	
	cin >> k;
	for(i=0; i<12; i++){
		cin >> x[i];
	}
	if(k==0){
		pf("0");
		return 0;
	}
	sort(x, x+12);
	reverse(x, x+12);
	for(i=0; i<12; i++){
		ans=ans+x[i];
		if(ans >= k) break;
	}
	if(ans<k){
		pf("-1");
		return 0;
	}
	cout << i+1;
	return 0;
	
}

