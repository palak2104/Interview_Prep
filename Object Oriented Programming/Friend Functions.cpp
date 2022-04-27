#include <bits/stdc++.h>

using namespace std;
class calculator{
 int a,b;
 public: 
 calculator(int a,int b){
    this->a=a;
    this->b=b;
 }
 friend int multiply(calculator c);
};
int multiply(calculator c){
    return (c.a)*(c.b);
}
int main()
{
calculator cal(3,5);
cout<<multiply(cal);

return 0;
}
