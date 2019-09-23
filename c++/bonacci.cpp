#include<iostream>
#include<algorithm>

using namespace std;

#define ll long long
ll a,b,c,d,e,f,n,T;
ll fn( ll n ){
	ll arr[n];
	for( ll i=0; i<=n; i++ ){
		if( i == 0 )  arr[i]=a;
		else if( i == 1 ) arr[i]= b;
		else if( i == 2 ) arr[i]=c;
		else if( i == 3 ) arr[i]=d;
		else if( i == 4 ) arr[i]=e;
		else if( i == 5 ) arr[i]=f;
		else
			arr[i]=
			(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007;
	}
	return arr[n];
}

int main(){
	
	cin >> T;
	ll N=0;
	while(T--){
		cin >> a>>b>>c>>d>>e>>f>>n;
		ll value = fn(n);
		cout << "Case " << ++N << ": " << value%10000007 << endl;
	}
	return 0;
}