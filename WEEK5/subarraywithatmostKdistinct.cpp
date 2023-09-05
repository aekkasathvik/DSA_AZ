#include<bits/stdc++.h>
using namespace std;
#define int long long
int mp[1000006+1];
signed main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;

        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];


        //setting head and tail
        int head=-1;
        int tail=0;
        int ans=0;
        int cnt=0;

        while(tail<n)
        {
            while((head+1<n)&&(cnt<k||mp[arr[head+1]]>0))
            {
                head++;
                if(mp[arr[head]]==0)
                    cnt++;
                mp[arr[head]]++;
            }

            ans+=head-tail+1;

            if(head>=tail)
            {
                mp[arr[tail]]--;
                if(mp[arr[tail]]==0)
                    cnt--;
                tail++;
            }
            else
            {
                tail++;
                head=tail-1;
            }
        }

        cout<<ans<<'\n';
    }
}