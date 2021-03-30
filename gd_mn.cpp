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
	int md = (n-1)/2;
	int tmp = -1;
	int x = 0;
	if(n%2 == 0)	
		x = (arr[md]+arr[md+1])/2;
	else
		x = arr[md];
	return x*x;

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
