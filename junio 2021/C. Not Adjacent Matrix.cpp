#include<bits/stdc++.h>
using namespace std;
int mat[100+5][100+5];
void notAdjacent(int n){
	int cont=1;
	for(int i=0;i<n;i++){
		int tmp=(i%2==0)?0:1;
		for(int j=tmp;j<n;j+=2){
			mat[i][j]=cont++;
		}
	}
	for(int i=0;i<n;i++){
		int tmp=(i%2==0)?1:0;
		for(int j=tmp;j<n;j+=2){
			mat[i][j]=cont++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}	
	//printf("\n");
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;	
		scanf("%d",&n);
		if(n==2){
			printf("-1\n");
		}
		else if(n==1){
			printf("1\n");
		}
		else{
			notAdjacent(n);
		}
	}
	return 0;
}
