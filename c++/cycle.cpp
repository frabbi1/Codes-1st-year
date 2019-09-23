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
	
	ll mx, p, m, n, i, j;
	
	while(1){
		cin>> m >> n;
		if(m==1 && n==1) cout<< "1 1";
		else{
			i=m;
		 loop:
		 	i++;
			if(i>n) break;	
		 	p=0;
		 	mx=0;
		 	j=i;
		 	lbl:
		 		if(j%2==0) {
		 			j=j/2;
		 			p++;
				 }
				 else {
				 	j=3*j + 1;
				 	p++;
				 }
				 if(j==1) {
				 	mx=max(mx,p);
				 	goto loop;
				 }
				 else goto lbl;
			}
		
		cout << m << ' ' << n << ' ' << mx;	
	}
	return 0;
}

