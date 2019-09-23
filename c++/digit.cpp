#include<iostream>
#include<string>

using namespace std;

string addDigit( string st, int len )
{
	int sum = 0;
	for( int i=0; i<len; i++ )
	{
		sum = sum + (st[i]-'0');
	}
	return to_string(sum);
}

string printAns( string st )
{
	int len = st.size();
	if( len == 1 ) 
	{
		cout << st << endl;
		return st;
	}
	for( int i=0; i<len; i++ )
	{
		cout << st[i];
		if( i<len-1 ) cout << '+';
	}
	cout << endl;
	string num = addDigit(st, len);
	//cout << num << endl;
	return num;
}

int  main()
{
	string s;
	int n;
	
	cin >> n >> s;
	
	int i=3;
	string st=s;
	while( i-- )
	{
		st = printAns(st);
	}
	return 0;
}
