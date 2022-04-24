#include <bits/stdc++.h>

using namespace std;
class x{
    public:
    int a;
    static int b;
    static void xset(int p){
        b=p;
    }
};
int x::b;
int main()
{

   x::xset(5);
   x o;
   cout<<o.b;
    return 0;
}
