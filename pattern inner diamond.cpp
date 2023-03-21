#include<iostream>
using namespace std;
int main()
{
  int row,col,spc,num;
  cin>>num;
  for(row=num;row>=1;row--)
  {
    for(col=1;col<=row;col++)
    cout<<"*";
    for(spc=1;spc<=(num-row)*2;spc++)
    cout<<" ";
    for(col=1;col<=row;col++)
    cout<<"*";
    cout<<"\n";
  }
  
     cout<<"\n";

  for(row=1;row<=num;row++)
  {
    for(col=1;col<=row;col++)
    cout<<"*";
    for(spc=1;spc<=(num-row)*2;spc++)
    cout<<" ";
    for(col=1;col<=row;col++)
    cout<<"*";
    cout<<"\n";
  }
return 0;
}
    
