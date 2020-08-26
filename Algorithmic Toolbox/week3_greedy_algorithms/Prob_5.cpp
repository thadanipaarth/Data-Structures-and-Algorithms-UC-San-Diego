#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compFunc(vector<int> after, vector<int> before)
{
	if(after[1]<before[1])
		return true;
	return false;
}
int main()
{
	int N;
	cin>>N;
	vector<vector<int> >tenants(N,vector<int>(2));
	for(int i=0;i<N;i++)
		cin>>tenants[i][0]>>tenants[i][1];
	sort(tenants.begin(),tenants.end(),compFunc); 
	vector<int> answer;
	answer.push_back(tenants[0][1]);
	for(int i=1;i<N;i++)
	{
		if(answer[answer.size()-1]<=tenants[i][1] && answer[answer.size()-1]>=tenants[i][0])
			continue;
		else
		{
			answer.push_back(tenants[i][1]);
		}
	}
	cout<<answer.size()<<"\n";
	for(int i=0;i<answer.size();i++)
		cout<<answer[i]<<" ";
	return 0;
}