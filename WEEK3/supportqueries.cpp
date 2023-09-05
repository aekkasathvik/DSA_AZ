#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	IOS
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
		int queries,k;
		cin>>queries>>k;
		multiset<int>mt;
		while(queries--) {
			int n;
			cin>>n;
			if(n==1) {
				int x;
				cin>>x;
				mt.insert(x);
			}
			else if(n==2) {
				int x;
				cin>>x;
				if(mt.find(x)!=mt.end())
					mt.erase(mt.find(x));
			}
			else  if(n==3){
					char ch;
					cin>>ch;
					int sum=0,count=0;
					reverse(mt.begin(),mt.end());
					for(auto itr : mt) {
						sum+=itr;
					}
					cout<<sum<<endl;
					}
 		}

}