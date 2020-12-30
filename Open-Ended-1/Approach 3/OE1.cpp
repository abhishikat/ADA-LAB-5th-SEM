//In second method we simply calculate second maximum element of array and print all element which is less than or equal to second maximum.
#include<bits/stdc++.h> 
using namespace std; 
  
void findElements(int arr[], int n) 
{ 
    int first = INT_MIN,  
        second = INT_MIN; 
    for (int i = 0; i < n; i++) 
    { 
        
        if (arr[i] > first) 
        { 
            second = first; 
            first = arr[i]; 
        } 
  
        else if (arr[i] > second) 
            second = arr[i]; 
    } 
  
    for (int i = 0; i < n; i++) 
        if (arr[i] < second) 
            cout << arr[i] << " "; 
} 
  
// Driver code 
int main() 
{ 
    nt n;
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