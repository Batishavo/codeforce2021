#include<bits/stdc++.h>
using namespace std;
int mark['Z'+5];
bool can(string cad){
	int pos=1;
	char ante=cad[0];
	mark[ante]=pos;
	for(int i=1;i<cad.length();i++){
		if(cad[i]!=ante){
			pos++;
			if(mark[cad[i]]==0){
				mark[cad[i]]=pos;
				ante=cad[i];
			}
			else {
				for(int i=0;i<='Z';i++){
					mark[i]=0;
				}
				return false;
			}
		}
		
	}
	for(int i=0;i<='Z';i++){
		mark[i]=0;
	}
	return true;
}
int main(){
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		string cad;
		int n;
		scanf("%d",&n);
		cin>>cad;
		if(n==1 || can(cad)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	
	return 0;
}
