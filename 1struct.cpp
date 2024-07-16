#include<iostream>
using namespace std;



int add(int a,int b)//prototype of the function(containg formal parameters),prototypes created and stored in stack memory and gets deleted fucntion ran completely after a call .This is declaration of function
{//this is body or definition of function
    return a+b;
}

void swap(int* a,int* b)//call by address
{//this is body or definition of function
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//we know function overloading by changing arguments hence can write both swap here.
void swap(int& a,int b)//call by address
{//this is body or definition of function
    int temp;
    temp=a;
    a=b;
    b=temp;
}

// void fun(int A[]){//array is passed by address always and hence require pointer to catch otherwise warning.

// // for(int x:A){//error cannot be use here// also remember that for each loop cannot be used for a pointer.(here,A is a pointer)
// // cout<<x<<" ";
// // }
// //hence,we pass size of array also as a parameter
// // cout<<sizeof(A)/sizeof(int)<<endl;


// // return sizeof(A)/sizeof(A[0]); error sizeof function ko direct return nhi kar sakte yaha kyuki 
// }

// void fun(int* A,int n){//call by address
//     //now A is a proper pointer to the array.though can use as int A[] like above as well and is also the same thingchanges are also reflected there also array.
// A[4]=15;//as pass by address so 
// for(int i=0;i<n;i++){
//     cout<<A[i]<<endl;
// }

// }

// //creating an array inside a function and returning its address
// int* fun(int size){
// int* p;
// p=new int[size];
// for(int i=0;i<size;i++){//also initializing here,actually intitializn aur declaration ki jagah we say creation and initialization respectivelyy
//     p[i]=i+1;
// }
// return p;

// }

  struct rectangle
    {
        int length;
        int breadth;
        // char a;

    };

// void fun(struct rectangle r){//pass by value  so copy created(both r is different) can check also
// r.length=20;
// printf("Length %d \nBreadth &d\n",r.length,r.breadth);

// }


// void fun(struct rectangle* r){//pass by address
// r->length=20;
// printf("Length %d \nBreadth &d\n",r->length,r->breadth);

// }

//creating object by a function dynamically(i.e. iside the heap)
// struct rectangle* fun(){
//     struct rectangle* p;
// p=new rectangle;
// //p=(struct rectangle* )malloc(sizeof(struct rectangle));
// p->length=15;
// p->breadth=7;
// return p;
// }


int main()
{
// //structure as an parameter
// struct rectangle r={10,5};
// // fun(&r);
// struct rectangle* ptr=fun();
// cout<<"Length "<<ptr->length<<"Breadth "<<ptr->breadth<<endl;
// printf("Length %d \nBreadth %d\n",r.length,r.breadth);

// //creation an dinsitializzn outside the main function(as pass by address so same as reflect everywhere samely)
// int* ptr,sz=5;
// ptr=fun(sz);
// for(int i=0;i<sz;i++){
//     cout<<ptr[i]<<" ";
// }


//array as a parameter
// int A[]={2,4,6,8,10};
// int n=5;
// fun(A,n);
// cout<<sizeof(A)/sizeof(int)<<endl;
// for(int x:A){//for each means storing each element in x one by one in each loop(hence works like itr )
// cout<<x<<" ";
// }
//parameter passing methods
//can also do mix of below three but conceptually then we will say what will be output
//1. call by value: as done in below functions(eg swap cannot be done by this) 
//2. call by address:eg swap fuunction :
// int x=3,y=4;
// swap(&x,&y);
//3. call by reference
// int x=3,y=4;
// swap(x,y);//this is same as call by address but more readable and easy to understand as nickname ,i.e. main function calling as x and y and swap function calling as a and b to the same variables respectively.
// cout<<x<<" "<<y<<endl;//4 4 if first is pass by ref and other by value

//functions: piece of code with a specified task(grouping data is structure and groupoing instructions is a function)
//just call a function in place of writing the code 100 times in the main(monolithic(all in main itself) to modular(procedural) programming)i.e. breaking big tasks into smaller one using functions.
// int x=5,y=3;
//add(x,y);//will return but noone to store(so act like constant) so store it in a variable though will not be an error at all.
// cout<<add(x,y);//function call containing actual parameters

// //dynamic allocation using pointer to a structure
//     struct rectangle *p;//in c++,removing struct is also valid with no error,but in c,struct is mandatory
// p=(struct rectangle*)malloc(sizeof(struct rectangle));
// p->length=5;
// p->breadth=3;

// //pointer to a structure by static object creation
// struct rectangle r={5,3};
// struct rectangle *p=&r;//pointers and variables are created inside the stack memory

// //cannot do p.length as p is not a variable,but a pointer,so first go that that location using *p and then access the member
// (*p).length =10;//in c++ this is same as p->length

// //reference variable: nickname and this concept is used in parameter passing 
// int a=10;
// int&r =a; i.e. r/a are same locations (just two names of same memory) but reference is not a pointer.(it is different thing)
// cout<<a<<" "<<r<<endl;

// //pointers of different datatypes:
// int* p1;
// char* p2;
// float* p3;
// double* p4;
// struct rectangle* p5;
// cout<<sizeof(p1)<<" "<<sizeof(p2)<<" "<<sizeof(p3)<<' '<<sizeof(p4)<<" "<<sizeof(p5);//no matter whatever is the size of the datatype the size of the pointer is same i.e. 8 bytes in 64 bit system and 4 bytes in 32 bit system i.e. size of pointer is independent of its datatype

// //using pointers creating an array in heap
// int* p;
// int* p=5; is error as [pointer only stores addess]
// //in c
// p=(int* )malloc(5*sizeof(int));//malloc returns void pointer so typecasting it to int pointer
// //in c++ simpler syntax for doing the same i.e. create an array in heap
// p=new int[5];
// p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
// for(int i=0;i<5;i++)
// {
//     cout<<p[i]<<endl;
// }
// delete []p;//deleting the array created in heap (should be done by ourselvers in dynamically allocating a memory(i.e. creation in heap))  or free(p) in c while delete [] p in c++



// int A[5]={2,4,6,8,10};
// int *p=A;
// p=A;//not &A otherwise error,avoid & with array
// cout<<p[0]<<endl;//2

// //pointers:
//pointer to an array
// int a[5]={3,2};for(auto x:a){
//     cout<<x<<" ";
// }
// int *p=a;//a itself is equal to &a in array case
// cout<<a<<endl;//0x61fef8 as told a and &a both give index of first element of a
// cout<<&a<<endl;//0x61fef8
// cout<<p<<endl;//0x61fef8
// cout<<*p<<endl;//3
// for(int i=0;i<5;i++)//printing the array using pointer ( as an iterator )
// {
//     cout<<*p<<endl;
//     p=p+1;//or p++ is same if written alaag se
// }

// int a=3;
// int* p;
// p=&a;
// cout<<&a<<endl;//prints the address of a
// cout<<p<<endl;//prints the address that is what is stored inside the pointer p
// cout<<*p<<endl;

// struct rectangle r={5,3};
//     cout<<r.length<<endl;
//     cout<<r.breadth<<endl;
//     cout<<r.a<<endl;  

return 0;
}