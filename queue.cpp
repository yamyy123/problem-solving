#include<iostream>
using namespace std;
#include<queue>

int main()
{
    queue<int>p;
    p.push(1);
    p.push(2);
    p.push(3);
   // cout<<p.front()<<" "<<p.back()<<endl;//p.front() will give the top most element
    //p.back() will give the back most element.
    while(!p.empty())
    {
        cout<<p.front()<<endl;
        p.pop();
    }
    
    return 0;
}
