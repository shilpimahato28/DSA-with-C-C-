#include<stdio.h>
#include<stdlib.h>

struct Rectangle{
    int length;
    int breadth;

};

int main(){


    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); //to allocate memory dynamically
    p->length=15;
    p->breadth=10;
    printf("%d",p->breadth);
    printf("%d",p->length);



return 0;
}