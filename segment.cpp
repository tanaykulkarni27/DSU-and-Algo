#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
class NumArray {
public:
    vector<int>tree;
    vector<int>arr;
    int n;
    NumArray(vector<int>& nums) {
        n = nums.size();
        arr.resize(n);
        for(int i = 0;i<n;i++){
			arr[i] = nums[i];
		}
		
        create_tree();
    }
    void create_tree(){
		tree.resize(n*2);
		for(int i = n,j=0;i<2*n;i++,j++){
			tree[i] = arr[i-n];
		}
		for(int i = n-1;i>0;i--){
            tree[i] = tree[i*2]+tree[i*2+1];
        }
		//debug(tree);
		
	}
	
    void update(int index, int val) {
		index+=n;
		int parent = index/2;
		int diffs = val - tree[index];
		tree[index] = val;
		while(parent > 0){
			//debug(parent);
			tree[parent] += diffs;
			parent/=2;
		}
	}
    
    int sumRange(int l, int r) {
		l+=n;
		r+=n;
		int res = 0;
		while(l<=r){
				if(l%2 == 1){
					res+=tree[l];
					l++;
				}
				if(r%2 == 0){
					res = tree[r];
					r--;
				}
				l/=2;
				r/=2;
		}
		return res;
    }
};
int main(){
	vector<int>arr(3);
	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 5;
	NumArray obj = NumArray(arr);
	//debug(obj.tree);
	cout<<obj.sumRange(0,2)<<" ";
	obj.update(1,2);
	cout<<obj.sumRange(0,2)<<" ";
	//debug(obj.tree);
	return 0;
}
