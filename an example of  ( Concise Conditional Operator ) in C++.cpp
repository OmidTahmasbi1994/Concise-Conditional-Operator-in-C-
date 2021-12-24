#include<iostream>
#include<conio.h>

using namespace std;
int main()

{
	float a , b;
	
	cout<<"Enter Two Integer or Float Numbers:"<<endl;
	
	cout<<"Enter a:"<<endl;
	cin>>a;
	
	cout<<"Enter b:"<<endl;
	cin>>b;
	
	cout<<endl<<endl;
	
	cout<<(a<b ? b : a)<<"  Is The Maximum ."<<endl;
	
	getch();
	
}
