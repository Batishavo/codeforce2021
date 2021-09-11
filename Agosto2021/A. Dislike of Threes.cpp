#include<bits/stdc++.h>
int arr[1005];
void likeNums(){
	int cont=1;
	for(int i=1;;i++){
		if(cont>1000){
			break;
		}
		if(i%3!=0){
			if(i>=10 && i%10!=3){
				arr[cont++]=i;	
			}
			else if(i<10){
				arr[cont++]=i;
			}
		}
	}
	
}
int main(){
	likeNums();
	int n;
	scanf("%d",&n);
	while(n--){
		int pos;
		scanf("%d",&pos);
		printf("%d\n",arr[pos]);
	}
	return 0;
}
