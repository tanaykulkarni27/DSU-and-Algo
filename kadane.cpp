/*

	Find the maximum sum  of a subarray in given array

*/

#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include <vector> 
#include<string>
using namespace std;
#define FOR(start,end) for(int i=start;i<end;i++)
#define lli long long int 
#define read(a) cin>>a;
#define readr(b,n) for(lli i=0;i<n;i++){cin>>b[i];}
#define printarr(arr,n) FOR(0,n){cout<<arr[i]<<" "; }cout<<endl;
const int MOD = 1000000007;
int kadane(int arr[],int n){
	int best_sum = arr[0],current_sum = arr[0];
	for(int i = 1;i<n;i++){
		current_sum = max(arr[i],current_sum+arr[i]);
		best_sum = max(current_sum,best_sum);
	}
	return best_sum;

}
void solve(){
	int n = 8;
	//read(n)
	int arr[n] = {-2, -3, 4, -1, -2, 1, 5, -3};
	// readr(arr,n)
	cout<<kadane(arr,n);
	cout<<endl;
}
// End Area to write solution
int main(){
	solve();
	return 0;
}


