//Program to find median of given array of numbers;
//Dev: A.H; Date: 26-jul-2017;
#include<stdio.h>
#define SIZE 50
void median(int a[], int num);
void selection_sort(int a[]);
int main(){
	int arr[SIZE];
	int num, i;
	printf("Enter number of elements:\t");
	scanf("%d",&num);
	printf("Enter %d numbers to find their median:-\n", num);
	for(i = 0;i < num; i++){
		scanf("%d",&arr[i]);
	}
	if(num == 0){
		printf("!!Please enter atleast a number!!");
		return 1;
	}
	median(arr, num);
	return 0;
}
void median(int arr[], int num){
    float med;
	selection_sort(arr);
	if(num%2==0)
		med = (float)(arr[num/2] + arr[num/2 - 1])/2;
	else
		med = arr[num/2];
	printf("The Median is = %f\n",med);
}
void selection_sort(int a[]){

}
//pending:-sort
