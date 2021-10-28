#include<bits/stdc++.h>
using namespace std;
void my_cad(string cad){
   string cad2=cad;
   sort(cad.begin(),cad.end());
   cout<<cad[0]<<" ";
   bool flag=1;
   for(int i=0;i<cad.length();i++){
        if(cad2[i]==cad[0] && flag==1){
            flag=0;
        }
        else{
            cout<<cad2[i];
        }
   }
   cout<<endl;
}
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        string cad;
        cin>>cad;
        my_cad(cad);
    }
    return 0;
}
