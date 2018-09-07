//include library
#include<iostream>


using namespace std ;
 
//include functions
	int main () 
{
	//declare variables
		int a ;
	//asking for input
		cout << " Enter the number of stars for each column of square " << endl;
		cin >> a ;
	//printing the stars
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<a;j++)
		{
			cout << "*";
		}
		cout <<endl;
		}
//end
return 0;
}
