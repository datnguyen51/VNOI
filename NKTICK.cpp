#include <bits/stdc++.h>
using namespace std;
int N, t[60001], r[60000], sum;
int f[600001];
void run()
{
	f[0]=t[0];
	f[1]=min(t[0]+t[1], r[0]);
	for(int i=2; i<N; i++)
		f[i]=min(t[i]+f[i-1], r[i-1]+f[i-2]);
	cout<<f[N-1]<<endl;
}
int main()
{
	cin>>N;
	for (int i = 0; i < N; i++)
		cin>>t[i];
	for (int i = 0; i < N-1; i++)
		cin>>r[i];
	run();
	return 0;
}