#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int number_digits;
	for(int i=1;;i++)
	{
		if(N<((long long)i*(i+1))/2)
		{
			number_digits=i-1;
			break;
		}
	}
	cout<<number_digits<<endl;
	for(int i=1;i<number_digits;i++)
	{
		cout<<i<<" ";
		N-=i;
	}
	cout<<N;
	return 0;
}