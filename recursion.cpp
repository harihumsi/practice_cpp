#include<bits/stdc++.h>
using namespace std; 

void f(int i , int n){
	if(i>=n) return ;

	cout<<"hari"<<endl;

	f(i+1,n);
}

void f1(int i , int n){
	if(i>=n) return;

	cout<<i+1<<endl;
	f1(i+1,n);
}

void f2(int n){

	if(n<= 0) return ;
     cout<<n<<endl;
	f2(n-1);
	
}
int main(){
	int n ;
	cin>>n ;

	f2(n) ;
}