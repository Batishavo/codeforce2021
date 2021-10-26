#include<bits/stdc++.h>
using namespace std;
const int limit =4e5;
int arr[limit+5];
int test,n,k;
int save_mice(){
    long long total=0;
    int solution=0;
    for(int i=0;i<k;i++){
        if(total+arr[i]<n){
            solution++;
            total+=arr[i];
        }
        else{
            break;
        }
    }
    return solution;
}
int main(){
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&k);
        for(int i=0;i<k;i++){
            int tmp;
            scanf("%d",&tmp);
            arr[i]=n-tmp;
        }
        sort(arr,arr+k);
        //printf("-");
        cout<<save_mice()<<endl;
    }
    return 0;
}
