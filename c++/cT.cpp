#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int *point;
	point = new int[2*n];
	for( int i=0; i<2*n; i++ )
	{
		cin >> point[i];
	}
	sort(point, point+(2*n) );
	int fl = 0;
	for( int i=0; i<n; i++ )
	{
		if(point[i]<point[2*n-i-1]) continue;
		else 
		{
			fl=1;
			break;
		}
	}
	
	if(!fl) cout << "YES" << endl;
	else cout << "NO" << endl;
	delete [] point;
	
	return 0;
}
