#include<bits/stdc++.h>
using namespace std; 

void nBinaryTriangle(int n) {
    for(int i=0 ; i<n ; i++){
        int h = 1 ,  k=0 ;
        //cout<<i+1%2;
        if ((i + 1) % 2 != 0) {
          for (int j = 0; j <= i; j++) {

            cout << h << " ";
            if (h == 1)
              h = 0;
            else
              h = 1;
          }
        }

        else {
          for (int j = 0; j <= i; j++) {
            cout << k << " ";
            if (k == 0)
              k = 1;
            else
              k = 0;
              
          }
        }
        
        cout<<endl;
    }
}


int main(){
  int n ;
  cin>>n ;
  vector<int> v = {1,23,4,6,7,8};
  v.pop_back() ;
  cout<<v.back()<<" "<<v.size() ;
}
