#include <iostream>
#include<vector>
using namespace std;
void get_perios(vector<int> &remainders,int M)
{
    remainders.push_back(0);
    remainders.push_back(1);
    int a=0,b=1,c;
    for(int i=2;;i++)
    {
        c=(a+b)%M;
        remainders.push_back(c);
        if(c == 1)
        {
            if(remainders[remainders.size()-2]==0)
            {
                remainders.pop_back();
                remainders.pop_back();
                break;
            }
        }
        a=b;
        b=c;
    }
}
int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<int> remainders;
    get_perios(remainders,m);
    cout<<remainders[n%remainders.size()];
}
