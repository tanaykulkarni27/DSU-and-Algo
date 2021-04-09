/*
	Author :- Tanay Kulkarni
	Date   :- 9-4-2021
	Time   :- 19:28:45.250379
	Name   :- solve.cpp 
*/
#include<bits/stdc++.h>
using namespace std;
int get_max(int arr[],int k,int n){
	int ans = 0;
	int tmp = 0;
	for(int i = 0;i<k;i++)
		ans += arr[i];
	tmp = ans;
	for(int i = k;i<n;i++){
		tmp += arr[i] - arr[i-k];
		ans = max(ans,tmp);	
		
	}
	// cout<<"| "<<ans<<" |\n";
	return ans;
}
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i = 0;i<n;i++)
		cin>>arr[i];
	cout<<"Ans is : "<<get_max(arr,k,n)<<endl;
	return 0;
}
/*
9 4
1 4 2 10 23 3 1 0 20

*/
