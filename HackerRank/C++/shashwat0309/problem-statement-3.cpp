/***Calculate the percentage of marks obtained in three subjects (each out of 100) by student A and in four subjects (each out of 100) by student B. Create an abstract class 'Marks' with an abstract method 'getPercentage'. It is inherited by two other classes 'A' and 'B' each having a method with the same name which returns the percentage of the students. The constructor of student A takes the marks in three subjects as its parameters and the marks in four subjects as its parameters for student B. Print the percentage of marks for both the students..***/
#include<iostream>
using namespace std;

class Marks 
{
  public:
  int total,percent;
  virtual void getpercentage()=0;
};
class A : public Marks 
{
    private:
    float sub1, sub2, sub3;
  
    public: 
    A(float s1, float s2, float s3) {
    sub1 = s1;
    	sub2 = s2;
    	sub3 = s3;
    }
    void getpercentage()
    {
        total=sub1+sub2+sub3;
        percent= (total*100)/300;
        cout<<" percentage of student A is:\n";
        cout<<percent;
    }
};

class B : public Marks
{
    private: 
    float sub1, sub2, sub3, sub4;
  
    public: 
    B(float s1, float s2, float s3, float s4) {
     sub1 = s1;
    	sub2 = s2;
    	sub3 = s3;
    	sub4 = s4;
    }
    void getpercentage()
    {
        total=sub1+sub2+sub3+sub4;
        percent=(total*100)/400;
        cout<<" percentage of student B is:\n";
        cout<<percent;
    }
};

int main ()
{
    Marks *p;
    A a2(47, 74, 22);
    p = &a2;
    p->getpercentage();
    B b2(47, 74, 22, 34);
    p=&b2;
    p->getpercentage();
    return 0;
}