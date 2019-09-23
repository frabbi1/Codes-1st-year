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

int x[10001];


int f(int l, int h){
	int i,a,p=1, cl=0;
	for(i=l;i<=h;i++){
		a=i;
		while(a!=1){
			if(a%2==0){
				a=a/2;
			}
			else {
				a=3*a+1;
			}
			p++;
		}
		cl=max(cl,p);
		p=1;
	}
	return cl;
}
int main(){
	int i, m, n, res=0, h , l;
	while((sf("%d %d",  &m, &n)) != EOF){
		h=max(m,n);
		l=min(m,n);
		res=f(l, h);
		cout<< m << " " << n << " " << res << endl;
		res=0;
	}
	
	return 0;
}

