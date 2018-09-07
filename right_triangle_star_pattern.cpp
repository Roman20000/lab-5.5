//include library
#include <iostream>

using namespace std;

//include fnctions
int main()
{

	//declare variables
	int a;
	//asking for input
	cout << " Enter the size of the pyramid " << endl;
	cin >> a;
	//printing the stars and spaces
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<i; j++) 
		{
			cout << "*";
		}
	cout << endl;
	}
//end
return 0;
}
