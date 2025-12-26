#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    for (int j = size-2; j >= 0; j--)
   {
     bool swapped=0;
     for (int i = 0; i <= j; i++)
        {
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swapped=1;
        }
        }
        if (swapped==0)
        {
            break;
        }
        
   }
}
int main(){
    int arr[]={7,4,8,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);
   
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 

    return 0;
}