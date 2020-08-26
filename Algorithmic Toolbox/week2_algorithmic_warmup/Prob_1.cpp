#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    long long int a=1,b=1,c;
    if(N == 0)
        cout<<0;
    else if(N == 1 || N == 2)
        cout<<1;
    else
    {
        for(int i=3;i<=N;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }
    return 0;
}
