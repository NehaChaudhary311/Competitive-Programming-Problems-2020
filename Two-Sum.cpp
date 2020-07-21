//Solution - Hashing -O(n)
#include <iostream>
#include <unordered_map>

// Function to find a pair in an array with given sum using Hashing
void findPair(int arr[], int n, int sum)
{
	// create an empty map
	std::unordered_map<int, int> map;

	// do for each element
	for (int i = 0; i < n; i++)
	{
		// check if pair (arr[i], sum-arr[i]) exists

		// if difference is seen before, print the pair
		if (map.find(sum - arr[i]) != map.end())
		{
			std::cout << "Pair found at index " << map[sum - arr[i]] <<
						 " and " << i;
			return;
		}

		// store index of current element in the map
		map[arr[i]] = i;
	}

	// we reach here if pair is not found
	std::cout << "Pair not found";
}

// Find pair with given sum in the array
int main()
{
	int arr[] = { 8, 7, 2, 5, 3, 1};
	int sum = 10;

	int n = sizeof(arr)/sizeof(arr[0]);

	findPair(arr, n, sum);

	return 0;
}



//Solution - Using Sorting -O(nlogn)
#include <iostream>
#include <algorithm>

// Function to find a pair in an array with given sum using Sorting
void findPair(int arr[], int n, int sum)
{
	// sort the array in ascending order
	std::sort(arr, arr + n);

	// maintain two indices pointing to end-points of the array
	int low = 0;
	int high = n - 1;

	// reduce search space arr[low..high] at each iteration of the loop

	// loop till low is less than high
	while (low < high)
	{
		// sum found
		if (arr[low] + arr[high] == sum)
		{
			std::cout << "Pair found";
			return;
		}

		// increment low index if total is less than the desired sum
		// decrement high index is total is more than the sum
		(arr[low] + arr[high] < sum)? low++: high--;
	}

	// No pair with given sum exists in the array
	std::cout << "Pair not found";
}

// Find pair with given sum in the array
int main()
{
	int arr[] = { 8, 7, 2, 5, 3, 1};
	int sum = 10;

	int n = sizeof(arr)/sizeof(arr[0]);

	findPair(arr, n, sum);

	return 0;
}
