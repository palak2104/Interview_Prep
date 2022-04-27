#include <bits/stdc++.h>

using namespace std;
class Sample{
  public:
  int a;
  Sample(){
    cout<<"Defaut Cunstructor called"<<endl;  
  }
  Sample(int a){
      this->a=a;
      cout<<"Parametrized Cunstructor called"<<endl;  
  }
  Sample(Sample &x){
      a=x.a;
      cout<<"Copy Cunstructor called"<<endl;  
  }
};
int main()
{
    Sample h;
    Sample s(5);
    Sample x(s);
    cout<<s.a<<" ";
    return 0;
}
