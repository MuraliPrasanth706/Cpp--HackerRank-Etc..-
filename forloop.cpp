#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,m;
	string c[10]={"one","two","three","four","five","six","seven","eight","nine"};
	cin >> n>>m;
for (int i = n; i <=m; i++)
{
	if(i>= 1 && i<=9){
		cout << c[i-1]<<"\n";
	}else if(i%2==0){
		cout<<"even \n";
	}else{
		cout<<"odd \n";
	}
}
   
	return 0;
}