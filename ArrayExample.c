#include<stdio.h>

int findingNum(int arr[],int key,int n){
	int i;
	for(i=0;i<n;i++)
		if(arr[i]==key)
			return i;
	return -1;
}
int main(){
	
	int arr[] = {10,60,30,80,40,20};
	int k = 80;
	int x;
	x = findingNum(arr,k,6);
	
	if(x==-1)
		printf("The no is not in array ");
	else
		printf("The position is :  %d",x);
	return 0;
}