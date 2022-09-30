#include<iostream>
using namespace std;
class Sample
{
	private:
		int data1,data2;
	public:
		void getdata(int i,char c);
		void display();
};
void Sample ::getdata(int i,char c)
{
	data1=i;data2=c;
}
void Sample::display()
{
	cout<<"Data1= "<<data1<<"Data2 = "<<data2<<endl;
}
int main()
{
	Sample *s_ptr;
	try
	{
     s_ptr= new Sample;
	}
	catch (bad_alloc ba)
	{
		cout<<"Bad allocation occoured ... the program will terminate now..";
		return 1;
	}
	s_ptr->getdata(25,'A');
	s_ptr->display();
	delete s_ptr;
	return 1;
}






