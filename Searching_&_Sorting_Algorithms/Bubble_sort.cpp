#include"iostream"
#include"cmath"
#include"string"
using namespace std;
int main()
{
	int array[]={93, 54, 45, 23, 2, 100, 22, 44};
	int t = sizeof(array) / sizeof(array[0]);
	cout<<"Lengthof th array= "<<t<<endl;
	cout<<"Array before sorting:"<<endl;
	for (int a=0; a<t; a++) {
        cout<<array[a]<<", ";
    }
	cout<<endl;
	for(int i=0; i<t-1; i++){
		cout <<"Pass "<<i+1<<endl;
		for(int j=0; j<t-i-1; j++){
			if(array[j]>array[j+1]){
//				swap(array[j], array[j+1]);
				array[j] += array[j+1];
				array[j+1]  = array[j] - array[j+1]; 
				array[j] = array[j] - array[j+1];
				
       			for (int p = 0; p < t; p++) {
           			cout<<array[p]<<", ";
        		}
       			cout<<endl;
			}
		}
		
	}
	cout<<"Sorted array"<<endl;
	for(int e=0; e<8; e++){
		cout<<array[e]<<", ";
	}
	return 0;
}
