#include<iostream>
using namespace std;
int mergeTwoSortedArray(int arr1[],int size1,int arr2[],int size2,int merge[]){
    int i=0,j=0,k=0;
    while (i<size1 && j<size2)
    {
        if (arr1[i] <= arr2[j])
        {
            merge[k++]=arr1[i++];         
        }
        else{
            merge[k++]=arr2[j++];
        }
    }    
        while (i < size1)
        {
            merge[k++] = arr1[i++];
        }
        while (j < size2)
        {
            merge[k++] = arr2[j++];
        }
}

int main(){
    int arr1[]={1,3,4,5,7,9};
    int arr2[]={2,6,8,9,10};
    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);
    int merge[s1+s2];
    mergeTwoSortedArray(arr1,s1,arr2,s2,merge);

    cout<<endl;
    for (int i = 0; i < (s1+s2); i++)
    {
        cout<<merge[i]<<" ";
    }
    cout<<endl;
    
        
    return 0;
}