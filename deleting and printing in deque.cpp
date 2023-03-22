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
    while(!p.empty())
    {
        cout<<p.front()<<endl;
        p.pop_front();
    }
    return 0;
}
//in this method we are deleting and printing the elements.
