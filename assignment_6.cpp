#include<iostream>
using namespace std;
int const sixe =50;
class vector
{
	float d[size];
	int s;
	public:
	void create(void);
	void modify(void);
	void multiply(void);
	void display(void);
	};
	void vector::create(void)
	{
		cout<<"\n\nEnter the array you want to create";
		cin>>s;
		cout<<"Enter"<<s<<"Real Numbers\n";
		for(int i=0;i<s;i++)
		cin>>d[i];
	}
void vector::modify(void)
	{
	int mfy_value;
	float with;
	cout<<"enter value to be modified";
	cin>>with;
	int search=0;
	for(int i=0;search<s;i++)
	{
		if(mfy_value==d[i])
			{
				d[i]=with;
			}
			search=i+1;
			}
      }
      void vector:: multiply(void)
      {
      	int mul;
      	cout<<"enter the value which you want to muktiply";
      	cin>>mul;
      	for(int i=0;i<s;i++)
      	d[i]=d[i]*mul;
      }
      void vector::display(void)
      {
      	cout<<"display of an array";
      	cout<<"(";
      	for(int i=0;i<s;i++)
      	{
      		cout<<d[i];
      		if(i!s-1)
      		cout<<",";
      		}
      		cout<<")";
      		}
      		int main()
      		{
      		vector o1;
      		int choice;
      		do
      		{
      		cout<<"\n\nchoice list\n";
      		cout<<"1. To create vector array\n";
      		cout<<"2. to modify an array";
      		cout<<"3. to multiply with scalar value";
      		cout<<"4. to display;
      		cout<<"5. Exit";
      		cin>>choice;
      		switch(choice)
      		{
      			case 1: o1.create();
      				break;
      			case 2: o1.modify();
      				break;
      			case 3: o1.multiply();
      				break;
      			case 4:o1.display();
      				break;
      			case 5: goto end;
      			}
      			}while(1);
      			end:
      			
      			return 0;
      			}
      			

