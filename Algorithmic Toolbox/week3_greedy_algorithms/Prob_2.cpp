#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
bool compFunc(vector<double> later, vector<double> before)
{
	if(later[2]>before[2])
		return true;
	else if(later[2] == before[2] && later[1]>before[1])
		return true;
	return false;
}
int main()
{
	int N,W;
	cin>>N>>W;
	vector<vector<double> >items(N,vector<double>(3));
	for(int i=0;i<N;i++)
	{
		cin>>items[i][0]>>items[i][1];
		items[i][2]=items[i][0]/items[i][1];
	}
	sort(items.begin(),items.end(),compFunc);
	double total_loot=0;
	for(int i=0;i<N && W!=0;i++)
	{
		if(items[i][1]>=W)
		{
			total_loot+=W*items[i][2];
			W=0;
		}
		else
		{
			total_loot+=items[i][0];
			W=W-items[i][1];
		}
	}
	cout<<fixed<<setprecision(4)<<total_loot;
}