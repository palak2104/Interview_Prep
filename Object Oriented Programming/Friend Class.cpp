#include <bits/stdc++.h>

using namespace std;
class sampa{
  friend class sampb;
  int a,b;
  public:
  void gettera(){
    cout<<"Enter data of sample A"<<endl;
    cin>>a>>b;
  }
  void displaya(){
      cout<<"Data of sample A class is "<<a<<" "<<b<<endl;
  }
};
class sampb{
    int x,y,sum;
    sampa sa;
    public:
    void getterb(){
       sa.gettera();
       cout<<"Enter data of sample B"<<endl;
       cin>>x>>y;
    }
    void sum_tot(){
       sum=sa.a+sa.b+x+y; 
    }
    void displayb(){
        sa.displaya();
        cout<<"Data of sample B class is "<<x<<" "<<y<<endl;
        cout<<"Total sum of all the elements is "<<sum<<endl;
    }
};
int main()
{
sampb b;
b.getterb();
b.sum_tot();
b.displayb();
return 0;
}
