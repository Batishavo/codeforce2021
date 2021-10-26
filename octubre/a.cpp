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
       // printf("-");
        for(int i=0;i<3;i++){
            if(my_max-arr[i]>0 || arr[i]==0){
                printf("%d ",my_max-arr[i]+1);
            }
            else{
                printf("%d ",0);
            }
        }
        printf("\n");

    }
    return 0;
}
