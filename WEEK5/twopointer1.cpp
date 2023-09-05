#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int ans=0;//maximum length of sub array having <=k zeros
    int tail=0,head=-1;
    int countofzeros=0;
    while(tail<n) {
        //check wheter the head can we incremented
        while(head+1<n && (a[head+1]==1 || a[head+1]==0 && countofzeros<k)) {
            head++;
            if(a[head]==0)
                countofzeros++;
        }

        ans=max(ans,head-tail+1);
        if(head>tail) {
            if(a[tail]==0)
                countofzeros--;
            tail++;
        }
        else {
            tail++;
            head=tail-1;
        }
    }
    cout<<ans;
    return 0;
}
