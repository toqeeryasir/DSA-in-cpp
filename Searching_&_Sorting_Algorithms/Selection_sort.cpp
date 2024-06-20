#include"iostream"
#include"string"
#include"cmath"
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
    int y;
    for(int e=0; e<t-1; e++){
    	int smallest = e;
    	cout <<"Pass "<<e+1<<endl;
    	for(y = e+1; y<t; y++){
    		if(array[smallest] > array[y]){
    			smallest = y;
			}
		}
		array[smallest] += array[e];
		array[e]  = array[smallest] - array[e];
		array[smallest] = array[smallest] - array[e];
		
		for (int p = 0; p < t; p++) {
        	cout<<array[p]<<", ";
        }
       		cout<<endl;
	}
	cout<<"\nSorted array"<<endl;
	for(int p=0; p<8; p++){
		cout<<array[p]<<", ";
	}
	return 0;
}
