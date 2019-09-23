#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	string account;
	
	cin >> account ;
	ll len = account.size();
	
	if( stol(account) >= 0 ){
		cout << account;
	}
	
	else {
		if( account[len-2] >= account[len-1] ) account.erase( len-2, 1 );
		else account.erase( len-1, 1 );
		cout << stol(account);
	}
	
	return 0;
}

