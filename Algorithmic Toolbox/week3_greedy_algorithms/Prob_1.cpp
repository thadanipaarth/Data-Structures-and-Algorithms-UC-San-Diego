#include<iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int number_of_coins=0;
	number_of_coins+=m/10;
	m=m%10;
	number_of_coins+=m/5;
	m=m%5;
	number_of_coins+=m;
	cout<<number_of_coins;
	return 0;
}