#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cout<<"Please give input : Number of lines "<<endl;
	cin>>n;
	cout<<"Input accepted\n";
	// print number of lines
	for(int i = 0 ; i< n; i++){
		//print spaces
		for(int j = 0; j < n - i ; j++){
			cout<<" ";
		}
		//print star *
		for(int k = 0; k <= i; k++){
			cout<<"*";
		}
		//print next star *
		for(int x = 0; x < i; x++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}