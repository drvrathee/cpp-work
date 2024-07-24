#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int s = 0;
    int e =n-1;
    while (s<=e){
        int mid =(s+e)/2;
        if(arr[mid]== key){
            return mid;
        }
        else if( arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[]={10,20,30,40,49,56,69,78,88};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;
    int index = binary_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index GOlu beta "<< index;}
        else{
            cout<<key<<" is not found Golu beta";
        }
    return 0;
}
