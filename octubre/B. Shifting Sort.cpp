#include<bits/stdc++.h>
using namespace std;
int n;
long long arr[60];
long long arr_pos[60][4];
void total(){
    int cont =0;
    for(int i=0;i<n;i++){
        int tmp=arr[i];
        int pos=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i] && arr[j]<tmp){
                tmp=arr[j];
                pos=j;
            }
        }
        if(pos!=-1){
            arr_pos[cont][0]=i+1;
            arr_pos[cont][1]=pos+1;
            arr_pos[cont][2]=pos-i;
            cont++;
            for(int j=i;j<=pos;j++){
                int aux=arr[j];
                arr[j]=tmp;
                tmp=aux;
            }
        }
        //printf("-----------\n");
        /*for(int j=0;j<n;j++){
            printf("%lld ",arr[j]);
        }
        printf("\n");*/
    }
    printf("%d\n",cont);
    for(int i=0;i<cont;i++){
        printf("%lld %lld %lld\n",arr_pos[i][0],arr_pos[i][1],arr_pos[i][2]);
    }
}
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        total();
    }

    return 0;
}
