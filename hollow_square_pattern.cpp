//include library
#include<iostream>


using namespace std ;
 
//include functions
	int main () 
{
	//declare variables
		int a,i ;
	//asking for input
	cout << " Enter the number of stars for each side of square " << endl;
	cin >> a;
	//printing the stars 
	for(int j=0;j<a;j++)
	{
		cout <<"*";
	}
	cout <<endl;
	for (i=0;i<a-2;i++)
	{
		cout << "*";
		for(int k=0;k<a-2;k++)
		{
			cout <<" ";
		}
		cout <<"*";
		cout << endl;
		}
	for(int j=0;j<a;j++)
	{
		cout <<"*";
	}
	cout << endl;
//end
return 0;
}
