#include<bits/stdc++.h>
using namespace std; 
void nStarTriangle(int n) {
    for(int  i = 0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++)
          cout<<"*";
          cout<<endl;
    }
 
   for(int  i = 1 ; i<n ; i++){
        for(int j=0 ; j<=n-i-1 ; j++)
          cout<<"*";
          cout<<endl;
    }

}

int main()
{
	int n ;
	cin>>n ;

	for(int i=0 ; i<n ; i++){
		for(int j=0 ;j<n-i-1 ; j++)
			cout<<" ";
		int t= 2*i+1 ;
		int h = 1 ;
		for(int j=0 ; j<(t-1)/2 ; j++)
			{ 
				cout<<h;
				h++ ;

			}
		cout<<h;
         h--;
		for(int j=0 ; j<(t-1)/2; j++)
		{
			cout<<h;
			h-- ;
		}
		cout<<endl;

	}

	nStarTriangle(n);

	return 0;
}