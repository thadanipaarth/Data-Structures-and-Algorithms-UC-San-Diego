#include<iostream>
#include<vector>
using namespace std;
bool isoptimised(int curr, int tocheck)
{
	string curr_str=to_string(curr),tocheck_str=to_string(tocheck);
	if(curr_str+tocheck_str>=tocheck_str+curr_str)
		return true;
	return false;
}
int main()
{
	int N;
	cin>>N;
	vector<int> number(N);
	for(int i=0;i<N;i++)
		cin>>number[i];
	int optimised_digit=0;
	string Solution;
	for(int i=0;number.size()!=0;i++)
	{
		optimised_digit=0;
		for(int i=1;i<number.size();i++)
		{
			if(isoptimised(number[optimised_digit],number[i]) == false)
			{
				optimised_digit=i;
			}
		}
// 		cout<<"optimised_digit:"<<optimised_digit;
		Solution.append(to_string(number[optimised_digit]));
		number.erase(number.begin()+optimised_digit);
	}
	cout<<Solution;
	return 0;
}