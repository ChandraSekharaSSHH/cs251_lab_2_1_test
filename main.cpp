#include<bits/stdc++.h>
#include"searching.h"
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	int val;
	cin>>val;
	if(search_custom(arr,val)){
		cout<<"Found"<<endl;
	}
	else{
		cout<<"Not Found"<<endl;
	}
	return 0;
}