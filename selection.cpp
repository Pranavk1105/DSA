#include<iostream>
using namespace std;
void selectionSort (int A[] ,int n)
{
    int i, j, min_index ,t;
    for (i = 0; i< n-1; i++)
    {
        min_index = i;
        for(j = i+1 ;j<n; j++)
        {
            if (A[j]<A[min_index])
            {
                min_index = j;
                
            }
        }
         t = A[min_index];
         A[min_index] = A[i];
         A[i]=t;
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
    selectionSort(arr ,5);
    cout<<"\n AfterSort\n";
    for(i = 0 ; i< 5; i++)

    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}