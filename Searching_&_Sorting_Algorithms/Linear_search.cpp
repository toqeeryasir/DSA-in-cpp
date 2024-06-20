#include"iostream"
#include"string"
using namespace std;
int main()
{	
	int target=100;
	int array[]={93, 54, 45, 23, 2, 100, 22, 44};
	for(int i=0; i<8; i++){
		if(array[i]==target){
			cout<<"Target is on "<<i<<"th index.";
			break;
		}
	}
	if(array[i] != target){
		cout<<"Target is not present in this Aaray of elements";
	} 
	return 0;
}
