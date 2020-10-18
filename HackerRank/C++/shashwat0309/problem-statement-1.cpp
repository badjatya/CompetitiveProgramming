/***Problem.1- Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called triangle and
rectangle from the base shape. Add to the base class, a member function get_data() to
initialize base class data members and another member function display_area() to compute
and display the area of figures. Make display_area() as a virtual function and redefine this
function in the derived classes to suit their requirements.***/
#include<iostream.h>
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