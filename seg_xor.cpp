#include<bits/stdc++.h>
using namespace std;
struct segment{
	int n;
	int *arr;
	segment(vector<int> nums,int sz){
		n = sz;
		arr = new int[sz+sz-1];
		add(nums,0,n-1,0);
	}
	int add(std::vector<int> nums,int l,int r,int index){
		if(l == r){
			arr[index] = nums[l];
			return arr[index];
		}
		else{
			int mid = l+(r-l)/2;
			arr[index] = add(nums,l,mid,index*2+1) ^ add(nums,mid+1,r,index*2+2) ;
			return arr[index];
		}
		}
	int query(int tl,int tr,int l,int r,int index){
		if(l>tr || r<tl)
			return 0;
		if(tl>=l && tr<=r)
			return arr[index];
		else{
			int mid = tl+(tr-tl)/2;
			return query(tl,mid,l,r,index*2+1) ^ query(mid+1,tr,l,r,index*2+2);
		}
	}

};
int main(){
	std::vector<int> nums(5);
	nums = {0,1,2,3,4};
	segment st = segment(nums,5);
	// for(int i = 0;i<=st.n+st.n-1;i++)
	// 	cout<<st.arr[i]<<" ";		
	for(int i = 0;i<3;i++){
		int a,b;
		cin>>a>>b;
		cout<<" "<<st.query(0,5,a,b,0)<<" ";
	}
	return 0;
	}




