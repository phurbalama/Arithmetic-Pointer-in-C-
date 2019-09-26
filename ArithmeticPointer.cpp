// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Pointer used for
//Accessing array elements
//Passing arguments to functions when function needs to modify the arguement(simulated call by reference)
//passing arrayand strings to functions
//Obtain memory from the system dynamically(during execution time)
//Creating data structes such as Linked Lists, stacks, queues, sorting algorithms, etc
//& address operator
//* indirection operator
//given any variable x its addres is& x
// int *ptr

#include <iostream>
using namespace std;

int main()
{
	
	double monthlysales[6];
	double monthlybonus[6];
	double* monthlysalespointer = monthlysales;
	double* bonus = monthlybonus;
	int i= 0;

	for (; monthlysalespointer < &monthlysales[6]; ++monthlysalespointer)
	{
		cout << "Enter monthly sales of each telemarketer" << endl;
		cin >> *monthlysalespointer;
		
		*(bonus) = *monthlysalespointer * 0.10;
		cout << "Telemarketer Number : "<<i <<"\nMonthly Sales : $" <<*(monthlysalespointer) << "\nBonus : $" << *(bonus) << endl;
		++bonus;
		++i;

	}

	 

	

	

}

