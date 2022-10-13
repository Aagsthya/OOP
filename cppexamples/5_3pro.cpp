#include<iostream>
using namespace std;

int const m=50;
class items
{

	int itemcode[m];
	float itemprice[m];
	int count;
	public:
		void cnt(void){count = 0;}
		void getitem(void);
		void displaysum(void);
		void remove(void);
		void displayitems(void);
};
void items :: getitem(void)

{
	cout<<"enter item code";
	cin>>itemcode[count];
	cout<<"enter item cost";
	cin>>itemprice[count];
	count++;
}
void items::displaysum(void)
{
	float sum=0;
	for(int i=0;i<count;i++)
	sum=sum+itemprice[i];
	cout<<"\ntotal value:"<<sum<<"\n";
}
void items::remove(void)
{
	int a;
	cout<<"enter item code:";
	cin>>a;
	for(int i=0;i<count;i++)
	if(itemcode[i]==a)
	itemprice[i]=0;
}
void items::displayitems(void)
{
	cout<<"\ncode price\n";
	for(int i=0;i<count;i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<" "<<itemprice[i];
	}
	cout<<"\n";
}
int main()
{
	items order;
	order.cnt();
	int x;
	do
	 {
		cout<<"\nyou can do the following;"
		    <<"enter appropriate number \n";
		cout<<"\n1 : add an item";
		cout<<"\n2 : display total value";
		cout<<"\n3 : delte an item";
		cout<<"\n4 : display all items";
		cout<<" \n5 : quit";
		cout<<"\n\nwhat is your option";
		cin>>x;
		
		switch(x)
		{
			case 1: order.getitem();break;
			case 2: order.displaysum();break;
			case 3: order.remove();break;
			case 4: order.displayitems();break;
			case 5: break;
			default: cout<<"error in input; try again\n";
		} 
		}while(x!=5);
	
	return 0;
}
