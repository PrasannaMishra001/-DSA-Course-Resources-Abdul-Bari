#include<iostream>
using namespace std;

// struct Rectangle{
//     int length;
//     int breadth;

// };

// void initialize(struct Rectangle* r,int l,int b){
//     r->length=l;
//     r->breadth=b;

// }

// int area(struct Rectangle r){
//     return r.length*r.breadth;

// }

// void changeLength(struct Rectangle* r){
// r->length=17;
// }

// void print(struct Rectangle r){
//     cout<<"Length: "<<r.length<<" Breadth: "<<r.breadth<<endl;
// }

//conversion to class 
 class Rectangle{
    private:

    int length;
    int breadth;

public: 

Rectangle(int l,int b){
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;

}

void changeLength(){
length=17;
}

void print(){
    cout<<"Length: "<<length<<" Breadth: "<<breadth<<endl;
 }

~Rectangle(){//constructor and destructor made inside public only
//here destructor is though not required as required if somewhere dynamic allocation is done 
cout<<"Destructor";
}

 };

int main()
{
//  struct Rectangle r;
//  initialize(&r,15,7);
// cout<<"Area: "<<area(r)<<endl;
// changeLength(&r);
// print(r);

//conversion to class
 class Rectangle r(15,7);
cout<<"Area: "<<r.area()<<endl;
r.changeLength();
r.print();
return 0;
}