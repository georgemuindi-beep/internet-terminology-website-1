#include <iostream>
#include <string>

struct student {
std :: string name;
int age;
float gpa ;
};

int main(){
    Student myStudent = {"George Sila", 3.8};
    Student* ptr = &myStudent;
    std ::  cout << "...Student Record ...." << std::end1;

    std :: cout <<"Name:" << ptr ->Name: << std ::end1;
    std :: cout <<"Age :" << ptr ->Age : << std :: end1;
    std :: cout <<"Gpa:" ptr->Gpa : << std :: end1;

    return 0;

}



