#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int d,m,n;
	cin>>d>>m>>n;
	vector<int> stops(n);
	for(int i=0;i<n;i++)
	{
		cin>>stops[i];
	}

	bool reached=false;
	int refils=0,last_refil=0;
	for(int i=0;i<(n-1);i++)
	{
		if((last_refil+m)>=stops[i] && (last_refil+m)<stops[i+1])
		{
			last_refil=stops[i];
			refils++;
		}
	}

	if((last_refil + m)>=stops[n-1] && (last_refil+m)<d && (stops[n-1]+m)>=d)
	{
		reached=true;
		refils++;
	}
	else if(last_refil + m >=d)
	{
		reached=true;
	}

	if(reached == true)
		cout<<refils;
	else
		cout<<-1;

	return 0;
}