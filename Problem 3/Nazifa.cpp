#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<ll,ll>cnt;
    map<ll,ll>trk;
    ll newc,oldc;
    while(t--)
    {
        int q;
        cin>>q;
        ll num;
        cin>>num;
        if(q==1)
        {
            oldc=cnt[num];
            if(oldc>0)
                trk[oldc]--;
            cnt[num]++;
            newc=cnt[num];
            trk[newc]++;
        }
        else if(q==2)
        {
            oldc=cnt[num];
            if(oldc>0)
            {
                trk[oldc]--;
                cnt[num]--;
                newc=cnt[num];
                if(newc>0)
                    trk[newc]++;
            }
        }
        else if(q==3)
        {
            if(trk[num]>0)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }
}
