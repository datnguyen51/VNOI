#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,a[1001],f[1001];
	cin>>N;
	f[0]=1;
	int max=0;
	for (int i = 0; i < N; i++)
		cin>>a[i];
	for (int i = 1; i < N; ++i)
	{
		f[i]=0;
		for (int j = 0; j < i; j++)
				if(a[i]>a[j] && f[i]<f[j])
					f[i] =  f[j];
		f[i]++;
	}
	for (int i = 0; i < N; i++)
		if(f[i]>max)
			max = f[i];
	cout<<max<<endl;
	return 0;
}