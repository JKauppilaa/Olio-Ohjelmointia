#include <iostream>
#include <student.h>
#include <vector>
#include <algorithm>
#include <iterator>


using namespace std;

bool compareName(Student&a, Student &b){
    return a.getName() < b.getName();
}

int main ()
{
    string a;
    int b;
    int selection =0;
    vector<Student>studentList;

    while(selection<5)
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection){
        case 0:
        {cout<<"Anna uuden opiskelija nimi" <<endl;
            cin >> a;
            cout<<"Anna uuden opiskelija ika" << endl;
            cin>> b;
            Student Opiskelija(a,b);
            studentList.push_back(Opiskelija);}
        // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
        // Lisää uusi student StudentList vektoriin.
        break;
        case 1:
        {

            for(auto it = studentList.begin(); it !=studentList.end(); it++){
                cout << "Nimi: " << it->getName()<< endl;
            }
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
        }
        break;

        case 2:
            sort(studentList.begin(),studentList.end(),[](Student& a, Student& b){
                return a.getName() < b.getName();
            });
            for(auto it = studentList.begin(); it != studentList.end(); ++it){
                it->printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            break;

        case 3:

            sort(studentList.begin(),studentList.end(),[](Student& a, Student& b){
                return a.getAge() < b.getAge();
            });
            for(auto it = studentList.begin(); it != studentList.end(); ++it){
                it->printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        case 4: {
            string nimi;
            cin >> nimi;
            auto it = find_if(studentList.begin(), studentList.end(),[nimi](Student& a){
                return a.getName() == nimi;
            });

            if(it != studentList.end()){
                it->printStudentInfo();
            }
            else{
                cout<<"Opiskelijaa ei loytynyt" <<endl;
            }
        }
        // Kysy käyttäjältä opiskelijan nimi
        // Etsi studentListan opiskelijoista algoritmikirjaston
        // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
        // opiskelijat
        // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
        break;

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }

    return 0;
}

