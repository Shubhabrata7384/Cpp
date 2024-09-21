#include<stdio.h>
int main (){
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	int element =9;
	int count =0;
	int start =0;
	int stop=sizeof(arr)/sizeof(int);
	while(2){
		int mid=start+((stop-start)/2);
		if(arr[mid]==element)
		{
			printf("he has reached madhyagram");
			break;
			
		}else{
			start=mid+1;
		}
		count++;
		if(count>stop){
			printf("he boarded wrong train!");
		}
	}
}
