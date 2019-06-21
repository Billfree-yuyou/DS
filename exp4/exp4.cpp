#include<iostream>
using namespace std;
int binarySearch(int *arr , int low , int high , int target)
{
	int middle = (low + high)/2;
	if(low > high)
		return -1;
	if(arr[middle] == target)
		return middle;
	if(arr[middle] > target)
		return binarySearch( arr , low , middle - 1 , target);
	if(arr[middle] < target)
		return binarySearch( arr , middle + 1 , high , target);
 
};
 
int binarySearch1(int a[], int n , int target)
{
	int low = 0 ,high = n , middle;
	while(low < high)
	{
	   middle = (low + high)/2;
       if(target == a[middle])
		   return middle;
	   else if(target > a[middle])
		   low = middle +1;
	   else if(target < a[middle])
		   high = middle;
	}
	return -1;
};
 
int main()
{
	int a[10] = {5,6,7,8,9, 10 , 11, 12 ,13, 14};
	int index = binarySearch( a , 0 , 9 , 12);
	cout<<index<< endl;
	int index2 = binarySearch1(a,10,12);
	cout<<index2<< endl;
	system("pause");
}