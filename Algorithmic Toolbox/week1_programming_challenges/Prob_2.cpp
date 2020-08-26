#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
    cout<<(long long)arr[0]*arr[1];
    return 0;
}
