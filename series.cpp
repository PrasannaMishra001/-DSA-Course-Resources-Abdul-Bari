#include<iostream>
using namespace std;
//functions which have operation in the calling time itself,only then we can use static variables for it.(kyuki vahi cheez bar bar banti hai)
//taylor series M1
double e(double x,double n){//n is just precision
static double p=1,f=1;//power and factorial respectively
double r;
if(n==0)return 1;//base call
r=e(x,n-1);
p=p*x;
f=f*n;
r=r+(p/f);
return r;
}

int e1(int x,int n){
static int s=1;
if(n==0)return s;
s=1+x/n*s;
return e1(x,n-1);
}
int main()
{
 //taylor series
  cout<<e1(1,100)<<endl;
 cout<<e(1,100)<<endl;

//iterative
int x=1;int n=100;//precision keeps adding
double s=0;
for(;n>0;n--){
s=1+x/n*s;
}
cout<<"The answer is : "<<s<<endl;
return 0;
}