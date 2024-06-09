#include <bits/stdc++.h>
using namespace std;


int firstOccurence(vector<int>v , int k , int n){
  
  int l = 0, r = n-1;
  int ans = -1;
  int cnt = 0;
  
  while(l <= r){
    int mid = l +(r-l)/2;
    
    if(v[mid] == k) {
      ans = mid;
      r = mid-1;
    }
    else if(v[mid] < k) l = mid+1;
    
    else r = mid-1;

   
  }
  
  return ans ;
}

int lastOccurence(vector<int>v , int k , int n){
  
    int l = 0, r = n-1;
  int ans = -1;
  
  while(l <= r){
    int mid = l +(r-l)/2;
    
    if(v[mid] == k) {
      ans = mid;
      l = mid+1;
    }
    else if(v[mid] < k) l = mid+1;
    
    else r = mid-1;
  }
  
  return ans ;
}

int main() {

 int n , q ;
 cin>>n>>q;
 
 vector<int>v(n);
 
 for(auto &i : v) cin>>i;
 
 while(q > 0){
   int t;
   cin>>t;
   
   cout<<firstOccurence(v, t , n)<<" "<<lastOccurence(v , t , n)<<endl;
   q=q-1;
   
 }
 return 0;
 

}