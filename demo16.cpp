#include<bits/stdc++.h>

using namespace std;
void extract(int x){
    int ld=0;
    while(x>0){
         ld=x%10;
        x=x/10;
    }
    cout<<ld;
}

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    extract(n);
    return 0;
}