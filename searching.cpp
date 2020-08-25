#include"searching.h"
using namespace std;

bool search_custom(vector<int> arr,int val){
	const int n=arr.size();
	for(int i=0;i<n;i++){
		if(arr[i]==val){return 1;}
	}
	return 0;
}