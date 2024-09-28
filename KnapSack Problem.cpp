// C++ program to solve fractional Knapsack Problem

#include <bits/stdc++.h>
using namespace std;

// Structure for an item which stores weight and
// corresponding value of Item
struct Item {
	int profit, weight;

	// Constructor
	Item(int profit, int weight)
	{
		this->profit = profit;
		this->weight = weight;
	}
};

// Comparison function to sort Item 
// according to profit/weight ratio
static bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.profit / (double)a.weight;
	double r2 = (double)b.profit / (double)b.weight;
	return r1 > r2;
}

// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int N)
{
	// Sorting Item on basis of ratio
	sort(&arr[0], &arr[N-1], cmp);
	
// 	Comparator Function (Optional): This parameter is optional and specifies a custom comparison function to determine the order of elements during sorting. 
// 	If provided, it should be a callable object (like a function pointer, function object, 
// 	or lambda function) that compares two elements and returns true if the first element should go before the second element in the sorted order, and false otherwise.
// 	If not provided, the default comparison function (operator<) is used for sorting.



	double finalvalue = 0.0;

	// Looping through all items
	for (int i = 0; i < N; i++) {
		
		// If adding Item won't overflow, 
		// add it completely
		if (arr[i].weight <= W) {
			W -= arr[i].weight;
			finalvalue += arr[i].profit;
		}

		// If we can't add current Item, 
		// add fractional part of it
		else {
			finalvalue
				+= arr[i].profit
				* ((double)W / (double)arr[i].weight);
			break;
		}
	}

	// Returning final value
	return finalvalue;
}

// Driver code
int main()
{
	int W = 50;
	Item arr[] = { { 70, 20 }, { 80, 30 }, { 90, 40 },{200,70} };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout<<"The most profit from the given weight=" << fractionalKnapsack(W, arr, N);
	return 0;
}

