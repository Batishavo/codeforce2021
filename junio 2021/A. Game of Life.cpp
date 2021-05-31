#include<bits/stdc++.h>
using namespace std;
string arr;
void change(int i,int m,int n){
	for(int j=i+1;j<i+m;j++){
		if(arr[i]=='0' && (arr[i]==n-1 ||arr[i+1]=='0')){
			arr[i]='1';
		}
		else {
			break;
		}
			
	}
	int x=max(-1,i-m);
	for(int j=i-1;j<x;j--){
		if(arr[i]=='0' && (arr[i]==0 || arr[i-1]=='0')){
			arr[i]='1';
		}
		else {
			break;
		}
			
	}
}
void iteration(int n,int m){
	for(int i=0;i<n;i++){
		if(arr[i]=='1')
			change(i,m,n);	
	}
	cout<<arr<<endl;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		cin>>arr;
		iteration(n,m);
	}
	return 0;
}
