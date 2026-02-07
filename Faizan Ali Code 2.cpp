#include<iostream>
#include<string>
using namespace std;
class teacher
{
 private:
double salary;
 public:
string name;
string dept;
string sub;
 void changeDept(string newDept) {
 dept=newDept;
 }
 void setSalary(double s) {
 salary =s + 5000;
 }
 double getSalary() {
 return salary;
 }
};
int main()
{
teacher t1;
t1.name="fatima";
t1.sub="c++";
t1.dept="Ccmputer Science";
t1.setSalary(25000);

cout<<t1.name<<endl;
cout<<t1.getSalary()<<endl;
return 0;
}





















