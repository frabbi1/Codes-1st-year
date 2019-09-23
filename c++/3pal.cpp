#include<bits/stdc++.h>
#include<string>

using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main(){
	
	ll n, i;
	string str;
	
	cin >> n;
	
	if(n==1) pf("a");
	else if(n==2) pf("aa");
	else{
		str[0]='a';
		str[1]='a';
		for(i=2; i<n; i++){
			if(str[i-2]=='a') { 
				str[i]='b';	
			}
			else if(str[i-2]=='b'){
				str[i] = 'c';
			}
			else {
				str[i]='a';
				
			}
		}
		str[i]='\0';
		cout << str;
	}
	
	return 0;
	
}

