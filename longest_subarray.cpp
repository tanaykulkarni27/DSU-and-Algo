/*

	maximum length of subarray in increasing order

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
int subarray(int arr[],int n){
	int ml = 1,cl = 1;
	for(int i = 1;i<n;i++){
		if(arr[i]>arr[i-1])
			cl++;
		else{
			ml = max(ml,cl);
			cl = 1;
		}
		//ml = max(ml,cl);
	}
	ml = max(ml,cl);
return ml;
}
void solve(){
	int n = 9;
	//read(n)
	int arr[n] = {5, 6, 3, 5, 7, 8, 9, 1, 2};
	// readr(arr,n)
	cout<<subarray(arr,n);
	cout<<endl;
}
// End Area to write solution
int main(){
	solve();
	return 0;
}


