//switch statements
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter a number between 1 to 7"<<endl;
    int x;
    cin>>x;
    switch(x){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;

        default:
        cout<<"enter valid number";
    }

    return 0;
}