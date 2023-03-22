#include<iostream>
using namespace std;
#include<deque>

int main()
{
    deque<int>p;
    p.push_back(1);
    p.push_back(2);
    p.push_back(3);
    cout<<p.front()<<" "<<p.back()<<endl;
    //p.front() will give the top most element
    //p.back() will give the back most element.
    int k = p.size();
   for(int i=0;i<k;i++)
   {
       cout<<p[i]<<endl;
   }
    
    return 0;
}
//in stack and queue indexing is not available.
//but in deque indexing is valid.
