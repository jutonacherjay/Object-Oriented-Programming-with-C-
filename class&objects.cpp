#include <iostream>
using namespace std;
class student{
  public:
 string name ;
 string dept;
 int id;
 int age;
 
};

class teacher{
  private:
  double salary;
  public:
 string name ;
 string dept;
 int age;
 
 void setSalary(int s){
   salary=s;
 }
 double getSalary(){
   return salary;
 }
 
};
int main() 
{
  student s1;
  s1.name="Juton";
  s1.dept="CSE";
  teacher t1;
  t1.name="Motaharul";
  t1.setSalary(20000);
    cout << t1.getSalary();
    return 0;
}