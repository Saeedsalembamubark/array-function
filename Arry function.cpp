#include <iostream>
using namespace std;
float calcaverage ( float arr[] , int size);
main()
{
float marks[5]={100,240,250,50,70};
		
	
cout<< calcaverage (marks , 5)<<"\n";	
			
}
float calcaverage ( float arr[] ,int size)
{
float sum=0.0;
for( int i = 0 ; i<size ; i++)
sum+=arr[i];
return sum / size;	
	
	
}
