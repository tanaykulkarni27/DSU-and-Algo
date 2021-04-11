/*
	Author :- Tanay Kulkarni
	Date   :- 11-4-2021
	Time   :- 17:53:14.807435
	Name   :- nbasem.cpp 
*/
#include<bits/stdc++.h>
using namespace std;
int inbase(int n,int m){
	return (int)(floor(log(n)/log(m))+1);
}
int main(){
int n,m;
cin>>n>>m;
cout<<inbase(n,m);
return 0;
}
