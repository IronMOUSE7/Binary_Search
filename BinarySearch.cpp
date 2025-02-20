#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
	
	int start = 0;
	int end = n-1;
	
	
	int mid = (start+end)/2;
	
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]<key){
			start=mid+1;
			
		}
		else{
			end = mid-1;
		}
		mid = (start+end)/2;
	}
	return -1;
	
}

void DisplayArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	 
	int arr[6]={2,5,7,14,22,,67};
	int odd[7]={3,5,8,11,17,22,44};
	
	DisplayArray(arr,6);
	DisplayArray(odd,7);
	
	
	int evenkey;
	int oddkey;
	cout<<"enter the key value for the even array : "<<endl;
	cin>>evenkey;
	cout<<"enter the key value for the odd array : "<<endl;
	cin>>oddkey;
	
	int index=BinarySearch(arr,6,evenkey);
	cout<<"the value " <<evenkey<< " is at the index :" <<index<<endl;
	int index2=BinarySearch(odd,7,oddkey);
	cout<<"the value " <<oddkey<< " is at the index :" <<index2<<endl;
	
	
}
