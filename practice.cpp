#include <bits/stdc++.h>
using namespace std;

bool predicate1(int mid, int k, vector<int>v){
  
  if(v[mid] < k) return 0;
  
  return 1;
}

bool predicate2(int mid, int k, vector<int>v){
  
  if(v[mid] <= k) return 0;
  
  return 1;
}

int fisrtOccurence(vector<int>v , int k , int n){
  
  int l = 0, r = n-1;
  
  while(l <= r){
    int mid = l +(r-l)/2;
    cout<<l<<endl;
    if(predicate1(mid, k, v) == 0) l=mid;
    else r = mid;
    // cout<<"iuhfiluegf"<<endl;
  }
  
  return r ;
}

int lastOccurence(vector<int>v , int k , int n){
  
  int l = 0, r = n-1;
  
  while(l <= r){
    int mid = l +(r-l)/2;
    
    if(predicate2(mid, k, v) == 0) l=mid;
    else r = mid;
    cout<<"wefef";
  }
  
  return l ;
}

int main() {

 int n , q ;
 cin>>n>>q;
 
 vector<int>v(n);
 
 for(auto i : v) cin>>i;
 
 while(q >= 0){
   int t;
   cin>>t;
   
   int l = fisrtOccurence(v, t, n);
   if(v[l] != t) l=-1;
   
   int r = lastOccurence(v, t, n);
   
   if(v[r] != t) r=-1;
   
   cout<<l<<" "<<r<<endl;
   q=q-1;
   cout<<"1"<<endl;
   
 }
 return 0;
 

}