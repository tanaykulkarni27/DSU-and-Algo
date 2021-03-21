#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include <vector> 
#include<string>
using namespace std;
#define sz(a) sizeof(a)
#define FOR(start,end) for(int i=start;i<end;i++)
#define lli long long int 
#define read(a) cin>>a;
#define readr(b,n) for(lli i=0;i<n;i++){cin>>b[i];}
#define printarr(arr,n) FOR(0,n){cout<<arr[i]<<" "; }cout<<endl;
const long int MOD = 1000000007;


int qhelper(int *tree,int tl,int tr,int l,int r,int index){
	if(l>tr || r<tl)
		return 0;
	if(l <= tl && r >= tr)
		return tree[index];
	
	else{
		int mid = tl+(tr-tl)/2;
		return qhelper(tree,tl,mid,l,r,index*2+1)+qhelper(tree,mid+1,tr,l,r,index*2+2);
	}
}
int solve_query(int tree[],int n,int l,int r){
	return qhelper(tree,0,n-1,l,r,0);
}
int helper(int arr[],int *tree,int n,int sz,int l,int r,int index){
	if(l==r){
		tree[index] = arr[l]; 
		return arr[l];
	}
	else{
		int mid = l+(r-l)/2;
		tree[index] = helper(arr,tree,n,sz,l,mid,index*2+1)+
					  helper(arr,tree,n,sz,mid+1,r,index*2+2);
		return tree[index];		
	}
}
int *create_segment_tree(int arr[],int n){
	int ss = n+(n-1);
	int *tree = new int[ss];
	memset(tree,0,sz(0));
	helper(arr,tree,n,ss,0,n-1,0);
	return tree;
}
void solve(){
	int n = 5;
	read(n)
	int arr[n];
	readr(arr,n);
	int *tr = create_segment_tree(arr,n);
	cout<<endl;
	cout<<solve_query(tr,n,3,4);

}

int main(){
	solve();
	return 0;
}
/* 
5
3
2
4
1
5
*/
