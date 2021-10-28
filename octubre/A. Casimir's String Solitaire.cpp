#include <bits/stdc++.h>
using namespace std;
string my_function(string cad){
    int a_c=0;
    int b=0;
    for(int i=0;i<cad.length();i++){
        if(cad[i]=='A' || cad[i]=='C'){
            a_c++;
        }
        else if(cad[i]=='B'){
            b++;
        }
    }
    if(a_c==b){
            return "YES";
        }
    else{
        return "NO";
    }
}
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        string cad;
        cin>>cad;
        //printf("*");
        cout<<my_function(cad)<<endl;
    }
    return 0;
}
