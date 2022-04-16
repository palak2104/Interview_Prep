#include <bits/stdc++.h>

using namespace std;
class item{
    public:
    static int a;
    int b=0;
    void add(){
        a++;
        b++;
    }
};
int item::a;
int main()
{
item i,j;
i.add();
cout<<"i.a"<<"="<<i.a<<" i.b="<<i.b<<endl;
cout<<"j.a"<<"="<<j.a<<" j.b="<<j.b<<endl;

    return 0;
}
