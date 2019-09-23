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
	
	int n, d, i, a, b, z, fl=0, j;
	ll cost[100001], x[100001], min[100001];
	
	cin >> n >> d;
	for(i=0;i<n;i++){
		cin >> a >> b >> cost[i];
		z=b-a+1;
		x[i]=z;
		if(z>d) fl++;
		
	}
	if(fl==n){
	 pf("-1");
	 return 0;
	}
	fl=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if((x[i]+x[j])==d){
				min[fl]=cost[i]+cost[j];
				fl++;
			}
		}
	}
	if(fl==0){
		cout<< -1;
		return 0;
	}
	ll c=sizeof(min)/sizeof(ll);
	sort(min,min+c);
	cout<< min[0];


	return 0;
}

