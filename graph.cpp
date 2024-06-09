#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int t;
  cin>>t;

  while(t--){
  	int n;
  	cin>>n;

  	vector<int>v(n);
  	for(auto &i : v) cin>>i;

  	string s(n,'R');
    s[1]= 'B';

    set<int>st(v.begin(), v.end());
     
     if(st.size()==1 and n>2) cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
     cout<<s<<endl;

  }
  return 0;

}