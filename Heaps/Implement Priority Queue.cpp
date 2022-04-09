#include <bits/stdc++.h>

using namespace std;
class Priority_Queue{
   int n=0;
   vector<int>arr;
   public:
   void heapify(int i){
    int l=2*i+1;
    int r=2*i+2;
    int temp;
    if(l<n && arr[l]>arr[i]){
        swap(arr[l],arr[i]);
        temp=l;
    }
    if(r<n && arr[r]>arr[i]){
        swap(arr[r],arr[i]);
        temp=r;
    }
    if(temp!=i){
        heapify(temp);
    }
   }
   void heapiadd(int i){
       int par=(i-1)/2;
       if(arr[i]>arr[par]){
           swap(arr[i],arr[par]);
           heapiadd(par);
       }
   }
   void pop(){
       if(n==0){
           cout<<"Priority Queue is empty"<<endl;
           return;
       }
       swap(arr[0],arr[n-1]);
       arr.pop_back();
       n--;
       heapify(0);
   }
   void push(int val){
       arr.push_back(val);
       heapiadd(n);
       n++;
   }
   int top(){
       return arr[0];
   }
   int size(){
       return n;
   }
};

int main()
{
    Priority_Queue pq;
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(8);
    while(pq.size()!=0){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}
