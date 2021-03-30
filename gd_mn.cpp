#include<bits/stdc++.h>
using namespace std;	
#define read(a) cin>>a;
/* We consider a problem where we are given n numbers a1,a2,...,an and our
task is to find a value x that minimizes the sum */

/*
Explaination :-
	In the general case, the best choice for x is the average of the numbers. In the
example the average is (1 + 2 + 9 + 2 + 6)/5 = 4. 



*/

int mn(int arr[],int n){
	int ans = 0;
	
	int x = 0;
	for(int i = 0;i<n;i++)
		ans+=arr[i];
	x = (ans/n);
	return x;

}
int main(){
	int n;
	read(n)
	int arr[n];
	for(int i = 0;i<n;i++)
		cin>>arr[i];

	cout<<mn(arr,n);
    return 0;
}
