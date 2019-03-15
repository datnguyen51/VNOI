#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,a[1001],f[1001];
	cin>>N;
	f[0]=1;
	int max=0;
	for (int i = 0; i < N; i++)
	{
		cin>>a[i];
	}
	for (int j = 1; j < N; j++)
			if(a[j]>a[j-1])
				f[j] =  f[j-1]+1;
			else
				f[j] = f[j-1];
	cout<<f[N-1]<<endl;
	return 0;
}