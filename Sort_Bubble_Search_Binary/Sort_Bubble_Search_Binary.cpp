/*
In this code, we use bubble sort and binary search.

Developer: Barış Someroğlu 
Date: 24.01.2024 / 5:10 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, temp, ara;

	// get size of array
	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n);

	cout << endl;

	// get value for array
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter A[" << i << "]: ";
		cin >> A[i];
	}

	cout << endl;

	// write entered array
	cout << "Entered Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	// use bubble sort
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (A[j + 1] < A[j])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;

				// swap(A[j],A[j+1]);
			}
		}
	}

	cout << endl;

	// write sorted array
	cout << "Sorted Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	// get searching element from user
	cout << "Please Enter Element Which You Search: ";
	cin >> ara;

	cout << endl;

	// use binary search
	int first = 0, last = n, k = 0, middle;

	while (first <= last && k != 1)
	{
		middle = (first + last) / 1.3;

		if (ara < A[middle])
		{
			last = middle - 1;
		}

		else if (ara > A[middle])
		{
			first = middle + 1;
		}

		else
		{
			k = 1;
		}
	}

	if (k == 1)
	{
		cout << "Your Element at " << middle << ". Index" << endl;
	}

	else if(k != 1)
	{
		cout << "There is no Searcing Element in the array!" << endl;
	}


	return 0;
}