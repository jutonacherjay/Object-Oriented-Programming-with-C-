#include <iostream>
using namespace std;
class student{
  public:
  student(){
      cout <<"this is student constructor..."<<endl ;
  }
 string name ;
 string dept;
 int id;
 int age;

};
class teacher : public student{
    public:
   double salary;
   
   teacher(){
       cout<< "this is teacher constructor.......";
   }
};

int main() 
{
   // student.s1
   teacher t1;
   
    return 0;
}