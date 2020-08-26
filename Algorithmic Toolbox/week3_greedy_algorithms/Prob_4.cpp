#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++)
			cin>>a[i];
	for(int j=0;j<n;j++)
			cin>>b[j];
	sort(a.begin(),a.end(),greater<int>() );
	sort(b.begin(),b.end(),greater<int>() );
	long long int result=0;
	for(int i=0;i<n;i++)
		result+=(long long)a[i]*b[i];
	cout<<result;
	return 0;
}