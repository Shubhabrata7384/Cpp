#include<stdio.h>
int main (){
	int n;
	printf("The size of the array:");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		printf("Enter the element in the index %d :",i);
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
	printf("The sorted array is :\n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
		
	}
}