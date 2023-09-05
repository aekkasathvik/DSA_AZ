#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   int T;
    cin >> T;
    while(T--) {
        int q;
        cin>>q;
        map<string,int>mp;
        while(q--) {
            string s;
            cin>>s;
            if(s=="add"){
                int y;
                string x;
                cin>>x>>y;
                mp.insert({x,y});
            }
            else if(s=="erase") {
                string x;
                cin>>x;
                mp.erase(x);
            }
            else {
                string x;
                cin>>x;
                if(mp.find(x)!=mp.end())
                cout<<mp[x]<<endl;
                else {
                    cout<<0<<endl;
                }
            }
           }
    }
return 0;
}
