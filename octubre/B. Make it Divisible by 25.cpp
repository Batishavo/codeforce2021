#include<bits/stdc++.h>
using namespace std;
int minimum_number(string num){
    //The times than apper
    int cont_0=0;
    int cont_5=0;
    //total
    int total_cont_0=0;
    int total_cont_5=0;
    //this is for know if can count
    bool can_0=true,can_5=true;
    for(int i=num.length();i--;i>=0){
        //
        //cout<<"*"<<num[i]<<"\n";
        //printf(" 0:%d \n 5:%d\n",total_cont_0,total_cont_5);
        if(num[i]=='0'){
            if(cont_0==0){
                cont_0++;
                total_cont_5+=(can_5)?1:0;
                continue;
            }
            else if(cont_0==1){
                cont_0++;
                can_0=false;
                total_cont_5+=(can_5)?1:0;
                continue;
            }
        }
        //
        if(num[i]=='5'){
            if(cont_0==1){
                cont_0++;
                can_0=false;
                total_cont_5+=(can_5)?1:0;
                continue;
            }
            if(cont_5==0){
                cont_5++;
                total_cont_0+=(can_0)?1:0;
                continue;
            }
        }
        //
        if(num[i]=='2' || num[i]=='7'){
            if(cont_5==1){
                cont_5++;
                can_5=false;
                total_cont_0+=(can_0)?1:0;
                continue;
            }
        }
        total_cont_0+=(can_0)?1:0;
        total_cont_5+=(can_5)?1:0;

    }
   // printf(" 0:%d \n 5:%d",total_cont_0,total_cont_5);
    return min(total_cont_0,total_cont_5);
}
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        string num;
        cin>>num;
        //printf("-");
        cout<<minimum_number(num)<<endl;
    }
    return 0;
}
