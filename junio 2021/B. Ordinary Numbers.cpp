#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		int n;
		scanf("%d",&n);
		int tam=0,aux=n;
		while(aux>0){
			aux/=10;
			tam++;
		}
		int cont=0;
		int comp=9,mul=9;
		while(n>comp){
			cont+=9;
			mul*=10;
			comp+=mul;
		}	
		
		for(int i=1;i<=9;i++){
			int sum1=i,sum2=i;
			for(int j=0;j<tam-1;j++){
				sum1*=10;
				sum2+=sum1;
				
			}
			if(n>=sum2){
				cont++;
			}
			else {
				break;
			}
			printf("%d -%d\n",sum1,sum2);
		}		
		
		printf("%d\n",cont);	
	}
	
	return 0;
}
