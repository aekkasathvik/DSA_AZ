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
        set<int>st;
        while(q--) {
            string s;
            cin>>s;
            if(s=="print") {
                for(auto itr:st){
                    cout<<itr<<" ";
                }
                cout<<endl;
            }
             if(s=="add") {
                int a;
                cin>>a;
                st.insert(a);
            }
             if(s=="erase") {
                int a;
                cin>>a;
                if(!st.empty())
                st.erase(a);
            }
             if(s=="find") {
                int a;
                cin>>a;
                if(st.find(a)!=st.end())
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            if(s=="empty") {
                s.clear();
            }
        }
    }
return 0;
}
