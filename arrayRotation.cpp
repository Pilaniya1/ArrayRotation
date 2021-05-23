#include <bits/stdc++.h>
using namespace std;

void leftRotatebyOne(int arr[], int n){
    //assigning 1st value of array to temp variable.
    int temp = arr[0] , i;
    //move values array to the one  left 

    for (i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    
    //putting the value of last element of array as 1st value of array  
    arr[n-1]=temp;

}

//roate function of array of size n by d
void leftRotate(int arr[],int d, int n){
   
    //calling leftRotatebyOne function d time
    for(int i=0 ;i<d ; i++){
        leftRotatebyOne(arr , n);
    }
        
}
void printArray(int arr[], int n)
{
    //print every element of array using for loop
    for(int i=0; i< n;i++)
        cout<<arr[i]<<" ";

}
int main()
{
    //assign values to arr[]
    int arr[] ={1,2,3,4,5,6,7};
    //finding size of array
    int n= sizeof(arr) / sizeof(arr[0]);
    //calling function leftRotate
    leftRotate(arr , 3, n);
    //printing values of array
    printArray(arr , n);

    return 0;

}



    
