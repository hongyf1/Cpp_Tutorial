#include<iostream>
using namespace std;
class A{
    public:
        int A_menber = 1;
};
class B : public A{
    public:
        int B_menber = 2;
    B(){
        A_menber = 2;
    }
};
class C : public A{
    public:
        int C_menber = 3;
    C(){
        A_menber = 3;
    }
};
class D :public B, public C{
    public:
        int D_menber = 4;
};

int main(){
    D d;
    cout << d.B::A_menber << endl;
    cout << d.C::A_menber << endl;
    return 0;
}