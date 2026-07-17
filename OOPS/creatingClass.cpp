#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Student{
public:
    // atttributes
    int id;
    int age;
    string name;
    int nos;

    // constructor
    // ctor: default constructor
    Student(){
        cout << "student default ctor called" << endl;
    }

    // ctor: parametrized constructor
    Student(int id, int age, string name, int nos){
        cout << "student parametrized ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }
    // ctor: copy constructor
    Student(const Student &srcobj) // srcobj => A
    {
        cout << "student copy ctor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // behaviour / methods / functions
    void study(){
        cout << this->name << " studying" << endl;
    }

    void sleep(){
        cout << this->name << " sleeping" << endl;
    }

    void bunk(){
        cout << this->name << " bunking" << endl;
    }

    // destructor
    // dtor: always default -> no need to add ,compiler adds it itself
    ~Student(){
        cout << "student default dtor called" << endl;
    }
};

int main(){
    // Student A;
    // A.id = 1;
    // A.age = 19;
    // A.name = "Harsh";

    // A.study();

    // Student B;
    // B.id = 2;
    // B.age = 19;
    // B.name = "Raj";

    // B.bunk();

    Student A(1,19,"Harsh",5); //Stored in stack memory

    // copy ctor
    // Student C = A;
    Student C(A); // this can also be used

    cout << C.name << " " << A.name << endl;

    // dynamic allocation, or studnet pointer;
    Student *B = new Student(1,14,"dsjkfs",7);
    cout << B->name << endl;
    delete B;
    return 0;
}