
#include<iostream>
#include<string>
using namespace std;
class Student
{
 public:
string name;
double* cgpaptr;
 student(string name, double cgpa){
 this->name=name;
 cgpaptr= new double;
 *cgpaptr=cgpa;
 }
 //Example of Destructor
 ~Student (Student &object){
 cout<<"Hi, I am destructor/n";
 cout<<"Destructor is used to dealocate the memory/n";
 delete name;
 delete cgpaptr;
 }
 Student s1("Fatime", 3.9);
s1.getInfo();
return 0;
}

 void getInfo(){
 cout<<"name:" <<name<<endl;
 cout<<"cgpa:" <<*cgpaptr<<endl;
 }
};
int main()
{ 

