#include"iostream"
#include"string"
using namespace std;
int main()
{	
	int target=111;
	int array[]={3, 11, 44, 56, 72, 89, 91, 98, 111};
	int t = sizeof(array) / sizeof(array[0]);
	int start = 0;
	int end = t-1;
	int mid = 0;
	while(start <= end){
		mid = (start + end)/2;
		if(target == array[mid] ){
			cout<<"Target is on "<<mid<<"th index."<<endl;
			break;
		}
		else if(target > array[mid]){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
	}
	
	if(array[mid] != target){
		cout<<"Target is not present in this Aaray of elements";
	} 
	
	return 0;
}
