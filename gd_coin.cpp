#include<bits/stdc++.h>
using namespace std;	
#define read(a) cin>>a;
void rev(int arr[],int l,int r){
	int st = l,ed = r;
	while(st<ed){
		swap(arr[st],arr[ed]);
		st++;
		ed--;
	}

}
int greedy(int n){
	int arr[8] = {1,2,5,10,20,50,100,200};
	// rev(arr,0,7);
	int ans = 0;
	while(n>0){
		for(int i = 7;i>=0;i--){
			if(arr[i]<=n){
				ans++;
				n-=arr[i];
				break;
			}			
		}
	}
	return ans;
		
}
int main(){
	int n ;
	read(n)
    cout<<greedy(n);	
    return 0;
}
