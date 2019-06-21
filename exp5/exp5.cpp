#include <iostream>
using namespace std;
 
void insert_sort(int a[],int len){
	int i,j,temp;
	for(i = 1;i<len;i++){
		temp = a[i];		
		for(j = i-1;j>=0 && a[j] > temp;j--){
			a[j+1] = a[j];		
		}
	a[j+1] = temp;
	}
}
 
//test
int main(){
	int a[] = {23,3,5,2,45,7,3,234,78,786};
	cout << "排序前：" << endl;
	int num = sizeof(a)/sizeof(a[0]);
	cout << "num = " << num << endl;
	for(int i =0;i<num;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	insert_sort(a,num);
	cout << "排序后：" << endl;
	for(int i = 0;i<num;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}