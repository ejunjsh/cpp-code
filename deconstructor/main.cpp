#include<iostream>
using namespace std;

class Test
{
    int id;
public:
    Test(){}
    Test(int i)
    {
        id = i;
    }
    ~Test()
    {
        cout<<"ID: "<<id<<" destruction function is invoked!"<<endl;
    };
};

int main()
{
    Test t0(0);                   //栈中分配   
    Test t1[3]{1,1,1}; 　　　　　　//栈中分配，数组型对象
    Test *t2 = new Test(2);       //堆中分配
    delete t2;
    Test *t3 = new Test[3]{3,3,3};//堆中分配
    delete []t3;
    cout<<"------End of Main-------"<<endl;
    return 0;
}