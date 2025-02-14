#include "student.h"

Student::Student(string a, int b): Name(a), Age(b) {
    cout << "Student luotu" << endl;
}

void Student::setAge(int a)
{
    Age = a;
}

void Student::setName(string a)
{
    Name = a;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo(){
    cout << "Nimi: " << Name << " Ika: " << Age << endl;
}
