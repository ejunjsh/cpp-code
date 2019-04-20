#include<iostream>
using namespace std;

class Test
{
    int id;
public:
    Test(int i)
    {
        id = i;
    }
    ~Test()
    {
        cout<<"ID: "<<id<<" destruction function is invoked!"<<endl;
    };
};

Test t0(0);　　                      //最先创建的对象，最后释放

void Func()
{
    static Test t1(1);               //创建静态对象，会在整个程序结束时自动释放
    Test t2(2);　　　　　　　　　　　　 //在Func结束时自动释放
    cout<<"-----Func-----"<<endl;
}

int main()
{
    Test t3(3);
    t3 = 10;                         //类型转换构造函数，这里会创建临时对象，将int型转成Test类型对象，在赋值结束后，临时变量销毁
    cout<<"------Begin of Main-------"<<endl;
    {
        Test t4(4);                  //花括号代表作用域，不需要等到main方法结束就释放了
    }
    Func();                          //进入Func函数
    cout<<"------End of Main-------"<<endl;
    return 0;
}