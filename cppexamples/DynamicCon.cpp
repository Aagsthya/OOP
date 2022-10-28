#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class Mystring
{
string name;
int length;
public:
Mystring():length(0)
{
name=""; 
}
Mystring (string s)
{
length=s.length();
name = s;
}
Mystring(Mystring &t)
{
length=t.length;
 name=t.name; }
void display()
{
cout<<"Name = "<<name<<endl;
cout<<"Length= "<<length<<endl;
}
void join(Mystring &objSurname, Mystring &objName)
{
this->length=objSurname.length+objName.length;
name=objSurname.name+objName.name;
}
};
int main(int argc, char* argv[])
{
string t;
cout<<"Enter 2nd part string: ";cin>>t;
Mystring firstname("GITAM"), secondname(t), myname;
myname.join(firstname, secondname);
cout<<"Details from myname obj"<<endl;
myname.display();
Mystring objDuplicate(myname);
cout<<endl; 
cout<<"Details of objDuplicate"<<endl;
objDuplicate.display(); 
return 0;
}
