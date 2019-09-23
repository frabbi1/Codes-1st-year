#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	
	int T;
	scanf("%d",&T);
	for( int i=1; i<=T; i++ ){
		int m, n;
		scanf("%d %d", &m, &n );
		int a=n/2;
		if(n%2) a++;
		
		int ans = n*(m/2);
		if(m%2) ans += a;
		if(m==1 || n==1 ) ans=max(m,n);
		else if(m==2 || n==2)
        {
			int x;
            if(m==2) x = n;
            else     x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }
		printf("Case %d: %d\n", i, ans );
	}
	return 0;
}