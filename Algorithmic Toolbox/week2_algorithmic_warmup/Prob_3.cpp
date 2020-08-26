#include <iostream>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int small,larger;
    
    if(a>=b)
    {
        larger=a;
        small=b;
    }
    else
    {
        larger=b;
        small=a;
    }
    
    for(;small != 0;)
    {
        larger%=small;
        larger=larger+small;
        small=larger-small;
        larger=larger-small;
    }
    cout<<larger;
    return 0;
}
