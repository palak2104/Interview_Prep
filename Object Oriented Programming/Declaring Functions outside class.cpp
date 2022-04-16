#include <bits/stdc++.h>

using namespace std;
class item{
    int a=5;
    public:
    int add(int);
};
int item::add(int b){
    return a+b;
}
int main()
{
item i;
cout<<i.add(3);

    return 0;
}
