#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,4,7,2,5,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int a=0; a<size; a++){
		int min=a;
		for(int b=a+1; b<size; b++){
			if(arr[b]<arr[min]){
				min=b;
			}
		}
		if(a!=min){
			swap(arr[a], arr[min]);
		}
	}
	for(int a=0; a<size; a++)
		cout<<arr[a]<<" ";
}
