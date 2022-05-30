#include <bits/stdc++.h>

using namespace std;
class A{
   public:
   void funcA(){
       cout<<"This is class A"<<endl;
   } 
};
class B : virtual public A{   
    public:
   void funcB(){
       cout<<"This is class B"<<endl;
   }  
};
class C: virtual public A{
    public:
    void funcC(){
       cout<<"This is class C"<<endl;
   } 
};
class D: public B, public C{
    public:
    void funcD(){
       cout<<"This is class D"<<endl;
   } 
};
/*using virtual with class B and C we can tell the compliler that functions of class A are getting inherited
only from one place*/
int main()
{
D d;
d.funcA();
d.funcB();
d.funcC();
d.funcD();

    return 0;
}
