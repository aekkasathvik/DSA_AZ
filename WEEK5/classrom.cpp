#include<bits/stdc++.h>
using namespace std;
int k,n;
vector<int>seats;

int check(int x) {
     int seated=0;
    for(int i=1;i<n;i++) {
        if(seats[i]-seats[i-1]>=x)
            seated++;
    }
    if(seated>=k)
        return 1;
    return 0;
}


int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T;
    while (T--) {
        cin>>n;
        seats.resize(n);
        int l=seats[0];
        int sum=0,ans=0;
        int r=accumulate(seats.begin(),seats.end(), sum);
        while(l<=r) {
            int mid=(l+r)/2;
            if(check(mid)==1) {
                ans=mid;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
