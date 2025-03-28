//arrays and strings basics
#include<bits/stdc++.h>
using namespace std;

int main(){
    /*int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[2]>>arr[3]>>arr[4];
    arr[3]+=10;
    cout<<arr[3];*/

    //2d array
int arr[3][5];
arr[1][3]=8;
cout <<arr[1][3];


//strings

string s="striver";
cout<<s[2];
int len=s.size();
cout<<s[len-1];

    return 0;
}