#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> Last_Digit(60);
    int a=0,b=1,c;
    Last_Digit[0]=0;
    Last_Digit[1]=1;
    for(int i=2;i<60;i++)
    {
        c=(a+b)%10;
        Last_Digit[i]=c;
        a=b;
        b=c;
    }
    long long int N,M;
    cin>>M>>N;
    cout<<(Last_Digit[(N+2)%60] - Last_Digit[(M+1)%60] + 10)%10;
    return 0;
}
