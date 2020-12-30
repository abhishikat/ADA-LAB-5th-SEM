//Given an array of N distinct elements, the task is to find all elements in array except two greatest elements.

//Approach-2

//We sort the array first in increasing order, then we print first n-2 elements where n is size of array.




#include<bits/stdc++.h> 
using namespace std; 
  
void findElements(int arr[], int n) 
{ 
    sort(arr, arr + n); 
  
    for (int i = 0; i < n - 2; i++) 
    cout << arr[i] << " "; 
} 
  
// Driver Code 
int main() 
{ 
    int n;
    cout<<"Enter Number of Elements:\t";
    cin>>n;
    cout<<"Enter Array Elements :\t";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"All elements in array except two greatest elements are:\n";
    findElements(arr, n); 
    return 0; 
} 