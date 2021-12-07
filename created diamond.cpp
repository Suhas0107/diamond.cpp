#include<iostream>
using namespace std;
class A
{
   int a=0;
   public: void cent()
   {
      cout<<"class A "<<a<<endl;
    }
  };
 class B: public virtual A
{
  int b=2;
public: void pent()
{
    cout<<"class B  "<<b<<endl;
}
};
class C: public virtual A
{
   int c=4;
  public : void kent()
{
    cout<<" class c "<<c<<endl;
}
};
 class D: public B,public C
{int d=7;
  public : void ment()
{
  cout<<"class d " <<d<<endl;
}
};
int main()
{
 D obj;


obj.cent();
obj.kent();
obj.ment();
return 0;
}
