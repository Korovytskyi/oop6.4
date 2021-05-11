#include <iostream>
#include <math.h>
#include <string>
using namespace std;

template<class T>
int dublicat(const T* H, int N)
{
	int dublicat_count = 0;
	for (int i = 0; i = N - 1; i++)
		N--;
	for (int i = 0; i < N; i++)
	{
		if (H[i] == H[i + 1])
			dublicat_count++;
	}
	return dublicat_count;
}
template <typename T>
void print(T* arr, size_t N)
{
	for (int j = 0; j < N; j++)
		cout << arr[j] << "  ";
	cout << endl;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	if (dublicat(arr, size(arr)))
		cout << "arr has dublicat elements" << endl;
	else
		cout << "arr doesn't have dublicat elements" << endl;
	print(arr, size(arr));
}