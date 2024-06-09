#include<bits/stdc++.h>
using namespace std;






int predicate(vector<int>v, int mid , int k){

	int ans = 0 ;
	int cnt = 0;

	for(int i=0  ; i<v.size() ; i++){

		cnt += ceil((double)v[i]/(double)mid);
	}

	if(cnt <= k) return 1;

	return 0;
}

int main(){
     int n, k;
	cin>>n>>k;
	
	  // if(k < n) {
	  // 	cout<<-1<<endl;
	  // 	return 1;
	  // }
     vector<int>v(n);

     for(auto &i : v) cin>>i;

	 int low = *min_element(v.begin(), v.end());
	int high = *max_element(v.begin(), v.end());
	

	while(low+1 < high){

		int mid = low +(high-low)/2 ;


		long ans = predicate(v, mid, k);

		if(ans == 0) low = mid;

		else high = mid;
	}
	cout<<high<<" "<<endl;

 
 }