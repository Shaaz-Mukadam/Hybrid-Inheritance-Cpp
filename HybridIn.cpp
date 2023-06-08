//******************HYBRID INHERITANCE***********
//Hybrid inheritance is a collection of multi level and multiple inheritance
//Hybrid inheritance mean the child class should derived property of parent class
//SYntax:
//  class A{
//  };
//  class B : public A {
//  };
//  class c : public A , public B{
//  };
// class D{
//  };
//Class E : public D{
//};

#include<iostream>
using namespace std;
class A {
public:
    void Afun() {
    cout<<"Hello This is a A function of Hybrid Inheritance\n";
    }
};
class B {
public:
    void Bfun() {
    cout<<"This is a B function of Hybrid Inheritance\n";
    }
};
class C : public A , public B {
public:
    void Cfun() {
    cout<<"This is a C function in Hybrid Inheritance\n";
    }
};
class D : public C {
public:

};
int main() {
 D d;
 d.Afun();
 d.Bfun();
 d.Cfun();
}
