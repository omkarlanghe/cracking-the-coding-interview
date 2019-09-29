#include<iostream>
#include<vector>

using namespace std;

int getMissingNo(int [], int);

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};

	int n = sizeof(arr) / sizeof(arr[0]);
	int missing = getMissingNo(arr,n);
	cout<<missing<<endl;
	return 0;
}

int getMissingNo(int arr[], int n) {
	int total = (n + 1) * (n + 2) / 2;
	for(int i = 0 ; i < n ; i++) {
		total = total - arr[i];
	}
	return total;
}
