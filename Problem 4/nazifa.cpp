#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
        cin>>vec[i];
    int sum=0;
    bool pos=false;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        sum+=vec[i];
        if(sum==0 or mp.find(sum)!=mp.end())
        {
           pos=true;
            break;
        }
        mp[sum]++;
    }
    (pos)?(cout<<"true"<<endl):(cout<<"false"<<endl);

}
