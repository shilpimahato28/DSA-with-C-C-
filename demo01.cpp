// pointer to structure
#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    Rectangle *p;

 p=new Rectangle;  // to create a new rectangle dynamically in heap
p->length=15;
p->breadth=7;
cout<<p->length<<endl;
cout<<p->breadth<<endl;

    return 0;


}