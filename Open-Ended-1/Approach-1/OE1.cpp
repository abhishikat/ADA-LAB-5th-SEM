//Given an array of N distinct elements, the task is to find all elements in array except two greatest elements.

//Approach-1

//The naive approach is to run two loops and check one by one element of array 
//check that array elements have at-least two elements greater than itself or not. 
//If its true then print array element.



#include<bits/stdc++.h> 
using namespace std; 
  
void findElements(int arr[], int n) 
{ 
     
    for (int i = 0; i < n; i++) 
    { 
        int count = 0; 
        for (int j = 0; j < n; j++) 
            if (arr[j] > arr[i]) 
                count++; 
  
        if (count >= 2) 
            cout << arr[i] << " "; 
    } 
} 
  
 
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