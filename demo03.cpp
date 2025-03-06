//OOPS IN CPP

#include <iostream>


using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

   void  initialise(int l,int b){
        length=l;
        breadth=b;
    }

    int area(){

        return length*breadth;
    }

    int  perimeter(){
        return 2*(length+breadth);
    }
};



int main(){
    Rectangle r;

    int l,b;
    cout<<("enter length and  breadth")<<endl;
    cin>>l>>b;

    r.initialise(l,b);
    int a= r.area();
    cout<<("area=",a)<<endl;
    int p=r.perimeter();
    cout<<("perimeter=",p);
    
    

    
    


}