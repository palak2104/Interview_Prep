#include <iostream>

using namespace std;
class car{
    public:
    void func(){
        cout<<"This is car class"<<endl;
    }
    virtual void add(){
      cout<<"Car Addition"<<endl;  
    }
};
class Maruti : public car{
    public:
    void func(){
        cout<<"This is Maruti class"<<endl;
    }
    void add(){
      cout<<"Maruti Addition"<<endl;  
    }
};
int main()
{
    
    car *c=new Maruti(); //Pointer of base class storing object of child class
    c->func(); //Static Binding as func is not virtual
    c->add();  //Dynamic Binding as func is virtual
    return 0;
}
