#include<iostream>
using namespace std;
//int x=0;//global variable a=can lso be used in placve of static variable and will do same thing as below.i.e. the same variable isused and its last value will be returned and used by all in returning.
// int fun(int n)
// {
//     static int x=0;
//     if(n>0)
//     {
//         x++;
//         return fun(n-1)+x;//here x is processed in return time  while fun(n-1) is the calling time first.
     
//     }
//     return 0;
// }

//indirect(circular)
// void funB(int n);//initializn
// void funA(int n){
//     if(n>0){
//         cout<<n<<" ";
//         funB(n-1);

//     } 
// }

// void funB(int n){
//     if(n>1){
//         cout<<n<<" ";
//         funA(n/2);
//     }
// }

//nested recursion
int fun(int n){//fast-thinking is reuired
    if(n>100)
        return n-10;
        else {return fun(fun(n+11));}
} 
int main()
{
    //nested recursion
cout<<fun(95);

//indirect recursion
// funA(5);

    //static and global:
//  int x=5;
//  cout<<fun(x);
return 0;
}



//types of recursion:
//tail recursion i.e. all opns will be performed at calling tme itself i.e. fun() at last and all code above it(as pername ) can try by printing 1,2,3,...But generally both tail recursion and loop takes 0(n) time but s.c. is more in recursion due to stack and hence better to use loop in place of tail recursion generally.
//
//head recursion; eg void fun(int n){
    //looking directly at head recurson is difficult to convert to loop and different logic is required hence sometimes it is favoured in place of loop .
//     if(n>0){
//         fun(n-1);
//         _________
//         _________
//         _________ 
//indirect recursion(circular recursion):






