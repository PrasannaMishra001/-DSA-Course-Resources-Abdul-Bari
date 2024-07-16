//template(generic) class:so that different datatypes values can also be used in the existing one.
#include<iostream>
using namespace std;

template<class T> //class ko template banane ke lite class ke just upar ye likho(don't just change int to T but check first as may not change based on logic)
class Arithmetic{
    private:
    T a;
    T b;
    public:
        Arithmetic(T a,T b);
        T add();//based on return type
        T sub();

};//yahan aane ke baad hi template khatm when scope ends hota hai

template<class T>
        Arithmetic<T>::Arithmetic(T a,T b){
        this->a= a;
        this->b=b;
}

template<class T>

T Arithmetic<T>::sub(){
T c;
c=a-b;
return c;

}
template<class T>
T Arithmetic<T>::add(){
T c;
c=a+b;
return c;

}

//non-generic class(can be used if a and b are int type only otherwise error)
// class Arithmetic{
//     private:
//     int a;
//     int b;
//     public:
//         Arithmetic(int a,int b);
//         int add();
//         int sub();

// };

// Arithmetic::Arithmetic(int a,int b){
// this->a= a;
//  this->b=b;
// }
// int Arithmetic::sub(){
// int c;
// c=a-b;
// return c;

// }
// int Arithmetic::add(){
// int c;
// c=a+b;
// return c;

// }
int main()
{
 Arithmetic<int> ar1(10,5);//now all T will change to int
 cout<<ar1.add()<<endl;

 Arithmetic<float> ar2(10.1,5.2);
  cout<<ar2.add()<<endl;
return 0;
}

//static vs dynamic memory allocation
//memory is divided into blocks and each block is of one byte
//addresses are linear in nature actually though can be represented as 2d(like mesh)/3d 
//
