#include <iostream>
using namespace std;

class BaseClass{
public:
    BaseClass() {}
    void f(const char *s = "unknow") {
        cout << "Function f() in BaseClass called from "<< s <<endl;
        h();
    }
protected:
    void g(const char *s = "unknow") {
        cout << "Function g() in BaseClass called from "<< s <<endl;
    }
private:
    void h() {
        cout << "Function h() in BaseClass\n";
    }
};

class Derived1Levell : public virtual BaseClass {
public:
    void f(const char *s = "unknow") {
        cout << "Function f() in Derived1Level1 called from " << s <<endl;
        g("Dervived1Level1");
        h("Dervived1Level1");
    }
    void h(const char *s = "unknow") {
        cout << "Function h() in Dervived1Level1 called from " << s << endl;
    }
};

class Derived2Levell : public virtual BaseClass {
public:
    void f(const char *s = "unknow") {
        cout << "Function f() in Derived2Level1 called from " << s <<endl;
        g("Dervived2Level1");
        //h("Dervived1Level1"); error
    }
};

class DerivedLevel2 : public Derived1Levell, public Derived2Levell {
public:
    void f(const char *s = "unknow") {
        cout << "Function f() in DerivedLevel2 called from " << s <<endl;
        g("DervivedLevel2");
        Derived1Levell::h("DervivedLevel2");
        BaseClass::f("DervivedLevel2");
    }
};

int main()
{
    BaseClass bc;
    Derived1Levell d1l1;
    Derived2Levell d2l2;
    DerivedLevel2 dl2;
    bc.f("main(1)");
}