#include<bits/stdc++.h>
using namespace std;
string long_palindromic(string s){
	string ans = "";
	int len = 0;
	int n = s.length();
	for(int i = 0;i<n;i++){
		for(int j = 1;i-j+1>=0 && i+j<n;j++){
			if(s[i-j+1]!= s[i+j])
				break;
			else if(len< j*2){
				len = j*2;
				ans = s.substr(i-j+1,j*2);
			}

		}
	}
	for(int i = 0;i<n;i++){
		for(int x = 0;i-x>=0 && i+x<n;x++){
			if(s[i-x] != s[i+x])
				break;
			else if( len < x*2+1){
				len = x*2+1;
				ans = s.substr(i-x,len);

			}
		}
	}
	return ans;
}
int main(){
	string s;
	cin>>s;
	cout<<long_palindromic(s)<<" ";
	return 0;
	}
/*
	


*/
