#include<iostream>
using namespace std;
#include<vector>
void f1()
{
    vector<int>a1={1,2,3,4,5};
    void displayElements(vector<int>);
    displayElements(a1);

}
void displayElements(vector<int>a1)
{
    for(int i=0;i<a1.size();i++)
        cout<<a1[i]<<" ";
}
void f2()
{
    vector<float>a1={1.5f,2,0.34f,4,5};
    void displayElements(vector<float>);
    displayElements(a1);

}
void displayElements(vector<float>a1)
{
    for(int i=0;i<a1.size();i++)
        cout<<a1.at(i)<<" ";
}
void f3()
{
    vector<string>a1={"v","i","v","e","k"};
    for(auto x:a1)
        cout<<x;
    
}
void f4()
{
    vector<int>a1={1,2,3,4,5};
    vector<int>::iterator it;
    for(it=a1.begin();it<a1.end();it++)
    {
        cout<<*it;
    }
}
vector<int> f5()
{
    vector<int>a1={20,50,10,30,50,40,60};
    vector<int>temp;
    vector<int>::iterator it;
    for(it=a1.begin()+1;it!=a1.end()-1;it++)
    {
        if(*it<*(it-1)&& *it<*(it+1))
            temp.push_back(*it);
    }
    return temp;

}
int main()
{
    vector<int>v2;
    v2=f5();
    for(auto x:v2)
        cout<<x<<" ";
    return 0;
}