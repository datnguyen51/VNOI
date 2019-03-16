#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,a[1001],f[1001];
	cin>>N;
	f[0]=1;
	int max=0;
	for (int i = 0; i < N; i++)
<<<<<<< HEAD
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
=======
	{
		cin>>a[i];
	}
	for (int j = 1; j < N; j++)
			if(a[j]>a[j-1])
				f[j] =  f[j-1]+1;
			else
				f[j] = f[j-1];
	cout<<f[N-1]<<endl;
>>>>>>> 73289fb48ce8146b50fe23c8326d0ed6adc84e6b
	return 0;
}