#include <iostream>
#include <vector>

using std::vector;

int Merge(int arr[], int aux[], int low, int mid, int high)
{
	int k = low, i = low, j = mid + 1;
	int inversionCount = 0;

	// While there are elements in the left and right runs
	while (i <= mid && j <= high)
	{
		if (arr[i] <= arr[j]) {
			aux[k++] = arr[i++];
		}
		else {
			aux[k++] = arr[j++];
			inversionCount += (mid - i + 1);	// NOTE
		}
	}

	// Copy remaining elements
	while (i <= mid)
		aux[k++] = arr[i++];

	// Don't need to copy second half

	// copy back to the original array to reflect sorted order
	for (int i = low; i <= high; i++)
		arr[i] = aux[i];

	return inversionCount;
}
// Sort array arr [low..high] using auxiliary array aux
long long MergeSort(int arr[], int aux[], int low, int high)
{
	// Base case
	if (high == low)	// if run size == 1
		return 0;

	// find mid point
	long int mid = (low + ((high - low) >> 1));
	long long inversionCount = 0;

	// recursively split runs into two halves until run size == 1,
	// then merge them and return back up the call chain

	// split / merge left  half
	inversionCount += MergeSort(arr, aux, low, mid);

	// split / merge right half
	inversionCount += MergeSort(arr, aux, mid + 1, high);

	// merge the two half runs
	inversionCount += Merge(arr, aux, low, mid, high);

	return inversionCount;
}

int main() {
  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  int aux[n];
	for (int i = 0; i < n; i++)
		aux[i] = arr[i];

	// get inversion count by performing merge sort on arr
	std::cout<<MergeSort(arr, aux, 0, n - 1)<<"\n";

  
}
