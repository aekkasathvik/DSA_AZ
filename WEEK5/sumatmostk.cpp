#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T;

    while (T--) {
        int n,k;

        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        //setting head and tail
        int head=-1;
        int tail=0;
        int ans=0;
        long long currsum=0;
        while(tail<n) {
            //add elements upto the sum of the sub a is less than or equal
            while(head+1<n  && (currsum+a[head+1]<=k)) {
                currsum+=a[head+1];
                head++;
            }
            cout<<head<<"*"<<tail <<endl;
            ans+=head-tail +1;
             if(head>=tail)
            {
                currsum-=a[tail];
                tail++;
            }
            else
            {
                tail++;
                head=tail-1;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
