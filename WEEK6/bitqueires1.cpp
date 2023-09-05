#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int q;
    cin>>q;
    vector<int>v(60,0);
    map<int,int>mp;
    mp.insert({0,60});
    while(q--)
        {
            int t;
            cin>>t;
            if(t==1) {
                int x;
                cin>>x;
                cout<<v[x]<<endl;
            }
            if(t==2) {
                int x;
                cin>>x;
                v[x]=1;
                mp[0]--;
                mp[1]++;
            }
            if(t==3) {
               int x;
                cin>>x;
                v[x]=0;
                mp[0]++;
                mp[1]--; 
            }
            if(t==4) {
                int x;
                cin>>x;
                if(v[x]==1)  {
                   v[x]=0;
                mp[0]++;
                mp[1]--; 
                }
                else {
                 v[x]=1;
                mp[0]--;
                mp[1]++;  
                }
            }
            if(t==5) {
                if(mp[1]==60) {
                    cout<<1<<endl;
                }
                else {
                    cout<<0<<endl;
                }
            }
            if(t==6) {
                if(mp[1]>0){
                    cout<<1<<endl;
                }
                else {
                    cout<<0<<endl;
                }
            }

            if(t==7) {
                if(mp[0]==60) {
                    cout<<1<<endl;
                }
                else {
                    cout<<0<<endl;
                }
            }
            if(t==8) {
                cout<<mp[1]<<endl;
            }
            if(t==9) {
                int ans=0;
                for(int i=0;i<60;i++) {
                    if(v[i]==1) {
                        ans+=(1<<(i));
                    }
                }
                cout<<ans<<endl;
            }
        }    

    return 0;
}
