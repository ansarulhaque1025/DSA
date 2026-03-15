#include<iostream>
using namespace std;
int isPalidrome(int arr[],int size){
    int i=0;
    while (i<size/2)
    {
        if (arr[i] != arr[size-1-i])
        {
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    int arr[]={10,20,30,20,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    if (isPalidrome(arr,size))
    {
        cout<<"Array is Palindrome"<<endl;
    }
    else{
        cout<<"Array is NOT Palindrome"<<endl;
    }
    
    return 0;
}