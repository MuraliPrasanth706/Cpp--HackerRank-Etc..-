#include<iostream>
using namespace std;
int max_of_four(int a,int b,int c,int d){
	int sum;
	if (a>b && a>c && a>d)
	{
		cout <<"A is max_of_four  : "<<a<<"\n";
	}else if(b>a && b>c && b>d){
		cout<<" B is max_of_four : "<<b<<"\n";
	}else if (c>a && c>b && c>d)
	{
		cout <<"C is max_of_four : "<<c<<"\n";
	}else{
		cout<<"D is max_of_four : "<<d <<"\n";
	}
	return 0;
}
int main(){
	int a,b,c,d;
	cout << "Enter the four numbers :" <<"\n";
	cin>>a>>b>>c>>d;
	int sum = max_of_four(a,b,c,d);
	return 0;
}