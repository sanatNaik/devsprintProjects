#include<iostream>
using namespace std;
int main()
{
	int a,fac=1;
	cout<<"enter name: ";
	cin>>a;
	for(int i=1;i<=a;i++){
		fac*=i;
	}
	cout<<"Factorial: "<<fact<<endl;
	return 0;
}
