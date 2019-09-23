#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define pf printf
#define sf scanf

int main()
{
	string s;
	int k;
	cin >> s;
	cin >> k;
	
	int len = s.size();
	
	if( len < k ) 
	{
		cout << "impossible" << endl;
		return 0;
	}
	
	else 
	{
		int alpha[26] = {0};
		for( int i=0; i<len; i++ )
		{
			alpha[s[i]-'a']++;
		}
		int  p = 0, q = 0;
		for( int i=0; i<26; i++ )
		{
			if( alpha[i]>1 ) p++;
			if( alpha[i]==1) q++;
		}
		int disLet = p+q;
		//cout << disLet << endl << p << endl << len << endl;
		if(disLet>=k) cout << 0;
		else cout << k-disLet;
		
		return 0;
	}
}

