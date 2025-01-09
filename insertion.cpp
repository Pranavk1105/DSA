#include<iostream>
using namespace std ;


void insertion (int A[], int n){
    for (int i = 1; i< n; i++) {
        int key = A[i];
        int j = i-1;

        while (j<=0&& key < A[j]) {
            A[j+1] = A[j];
            --j;
        }
        A[j+1]=key;
    
    }
}

int main()
{
    int arr[]= { 6,8,4,5,2};
    int i;
    cout<<"\n Before Sort\n";
    for( i = 0; i< 5; i++)

    {
        cout << arr[i] << "\t";
    }
    insertion(arr ,5);
    cout<<"\n AfterSort\n";
    for(i = 0 ; i< 5; i++)

    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}