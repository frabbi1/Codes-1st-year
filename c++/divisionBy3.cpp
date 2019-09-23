#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<sstream>

using namespace std;
 
typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf
#define pb push_back


int main(){
	
	ll caseNo;
	cin >> caseNo;
	
	for( int i=1; i<=caseNo; i++ ){
		ll a,b;
		cin >> a >> b;
		
		ll x,y;
		if((a-1)%3) x= ((a-1)/3)+1;
		else x=(a-1)/3;
		//cout << x << endl;
		//x=(a-1)-x;
		if(b%3) y=(b/3)+1;
		else y=b/3;
		//cout << y << endl;
		//y=b-y;
		ll ans=y-x;
		ans=((b-a)+1)-ans;
		
		pf("Case %d: %lld\n", i,ans);
	}
	return 0;
}