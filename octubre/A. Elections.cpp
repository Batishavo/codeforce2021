#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int arr[5],my_max=0;
        for(int i=0;i<3;i++){
            scanf("%d",&arr[i]);
            my_max=max(arr[i],my_max);
        }
        int cont=0;
        for(int i=0;i<3;i++){
            if(arr[i]==my_max){
                cont++;
            }
        }
        for(int i=0;i<3;i++){
            if(arr[i]<my_max){
                printf("%d ",my_max-arr[i]+1);
            }
            else if(arr[0]==arr[1] && arr[1]==arr[2]){
                printf("%d ",1);
            }
            else if(arr[i]==my_max && cont>=2){
                printf("%d ",1);
            }
            else{
                printf("0 ");
            }

        }
        printf("\n");

    }
    return 0;
}
