/*
	Author :- Tanay Kulkarni
	Date   :- 10-4-2021
	Time   :- 18:11:35.943769
	Name   :- problem-a.cpp 
*/
#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
	if(n == 2 || n == 3)
		return true;
	if(n%2 == 0 || n%3 == 0)
		return false;
	for(int i = 5;i*i<=n;i+=6){
		if(n%i == 0 || n%(i+2) == 0)
			return false;
	}
	return true;
}
int main(){
  int n;
  cin>>n;
  cout<<is_prime(n)<<endl;
  return 0;
}
