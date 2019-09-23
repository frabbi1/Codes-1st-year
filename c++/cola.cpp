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

int p=0;

int main(){
	
	int n, cn;
	
	while ( scanf("%d", &n) != EOF ){
		cn = n;
		while(cn>=3) {
			p = p + cn/3;
			cn = cn/3 + cn%3;
		}
		if(cn==2) p++;
		pf("%d\n",p+n);
		p=0;
	}


	return 0;
}


