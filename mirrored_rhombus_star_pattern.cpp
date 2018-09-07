//include library
#include <iostream>

using namespace std;

//include fnctions
int main()
{

	//declare variables
	int a;
	//asking for input
	cout << " Enter the number of stars on each side " << endl;
	cin >> a;
	//printing the stars and spaces
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<i; j++) 
		{
			cout << " ";
		}
		for (int j=0; j<a; j++)
		{
			cout <<"*";
		}
		for (int j=0; j<a-i; j++)
		{
			cout <<" ";
		}
	cout << endl;
	}
//end
return 0;
}
