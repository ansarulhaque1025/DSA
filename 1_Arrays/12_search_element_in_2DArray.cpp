#include<iostream>
using namespace std;
int main(){
    int size1,size2;
    cout<<"Enter no of rows : ";
    cin>>size1;
    cout<<"Enter no of columns : ";
    cin>>size2;

    int arr[size1][size2];
    
    int i=0;
    while (i<size1)
    {
        int j=0;
        while (j<size2)
        {
            cout<<"Enter "<<(i+1)<<" "<<(j+1)<<" : ";
            cin>>arr[i][j];
            j++;
        }
        i++;
    }

    int x;
    cout<<"Enter element you want to search : ";
    cin>>x;
    
    int l=0;
    while (l<size1)
    {
        int m=0;
        while (m<size2)
        {
            if (arr[l][m] == x)
            {
                cout<<"Element "<<x<<" was found at row "<<l+1<<", column "<<m+1<<endl;
            }
         m++;   
        }
        l++;
    }



    return 0;
}