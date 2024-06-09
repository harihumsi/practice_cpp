#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int l, int m, int r)
    {
         vector<int> a;
          
         int i = l , j=m+1;
         int k=0;
         
         while(i <= m and j<=r){
             if(arr[i] < arr[j]){
                 a.push_back(arr[i]) ;
                 i++; k++;
             }
             
             else{
                 a.push_back(arr[j]);
                 j++;
                 k++;
             }
         }
         
             while(j <= r){
                 a.push_back(arr[j]);
                 j++;
                 k++;
             }
         
         
         
             while(i <= m){
                 a.push_back(arr[i]) ;
                 i++ ;
                 k++;
             
         }
         for(int h=l ; h<=r ; h++){
             arr[h] = a[h-l] ;
         }
    
}

void mergeSort(vector<int>&arr, int l, int r)
    {
        if(l < r){
            int mid = (l+r)/2 ;
            mergeSort(arr, l , mid) ;
            mergeSort(arr, mid+1, r);
            merge(arr, l , mid, r);
        }
    }

int main(){
     int n;
     cin>>n;
     vector<int>v(n);
     for(auto &i : v) cin>>i;

     mergeSort(v, 0 ,n-1);	

    for(auto c : v) cout<<c<<" ";
}


