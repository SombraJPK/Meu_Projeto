#include <iostream>

using namespace std;

int main()
{

int num1,num2;
cout<<"Digite um numero: ";
cin>>num1;
cout<<"Digite outro numero: ";
cin>>num2; 
cout<<"\n\nPrimeiro numero digitado foi: "<<num1<<"\nSegundo numero digitado foi: "<<num2<<endl;

if (num1<num2)
{
	cout<<"Segundo valor digitado e maior que o primeiro"<<endl;
}
else
{
	cout<<"Primeiro valor digitado e maior que o segundo valor digitado "<<endl;
}

	return 0;
}
