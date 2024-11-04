/*#include<iostream>
#include<climits>
using namespace std;
void print3LargestNumber(arr[],arr_size){
    int first , secend,third;

    if(arr[]<3){
        cout<<"invalid value"<<endl;
        return;
    }
    third = first = secend = INT_MIN;
    for(int = 0 ; i < arr_size ; i++){

        if(arr[i]>third){
            third = secend ;
            secend = first;
            first = arr[i];
        }
        else if(arr[i]>secend && arr[i] != first){
            third = secend ;
            secend = arr[i];

        }
        else if( arr[i]> third && arr[i] != second && arr[i] != first){
            third = arr[i];
        }

        cout<<"three largesst element are"<< first <<" "<< secend << " "<< third << endl;

         
    }
    

}
int main(){
        int arr[] = { 12, 13, 1, 10, 34, 11, 34 }; 
           n = sizeof (arr)/sizeof(arr[0]);
           print3LargestNumber(arr,n);
           return 0 ;
} */
// C++ program for find the largest 
// three elements in an array
 /*#include <bits/stdc++.h> 
using namespace std;

// Function to print three largest elements 
void print3largest(int arr[], int arr_size) 
{ 
    int first, second, third; 

    // There should be atleast three elements 
    if (arr_size < 3) 
    { 
        cout << " Invalid Input "; 
        return; 
    } 

    third = first = second = INT_MIN; 
    for(int i = 0; i < arr_size; i++) 
    { 
        
        // If current element is
        // greater than first
        if (arr[i] > first)
        { 
            third = second; 
            second = first; 
            first = arr[i]; 
        } 

        // If arr[i] is in between first
        // and second then update second 
        else if (arr[i] > second && arr[i] != first)
        { 
            third = second; 
            second = arr[i]; 
        } 

        else if (arr[i] > third && arr[i] != second && arr[i] != first) 
            third = arr[i]; 
    } 

    cout << "Three largest elements are "
        << first << " " << second << " "
        << third << endl; 
} 

// Driver code
int main() 
{ 
    int arr[] = { 12, 13, 1, 10, 34, 11, 34 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    print3largest(arr, n); 
    return 0; 
} 

// This code is contributed by Anjali_Chauhan */
// second largest number  brute approch
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
  int secondlargestNumber(vector<int> &arr){
     int n = arr.size();
     sort(arr.begin(), arr.end());
     for(int i = n-2 ; i >= 0 ; i--){
        if( arr[i] != arr[n-1]){
            return arr[i];
        }
        
     }

            return -1;
  }
   int main() {
    vector<int>  arr = { 222,33,444,33,77,};
     cout << secondlargestNumber(arr);
     return 0 ;
   } 
//time complexity nlogn
#include<iostream>
#include<vector>
#include<algorithm
using namespace std;
int secondlargestNumber( vector<int> &arr){
    int n = arr.size();
     int largest = -1 ;
     int secondlargest = -1;
     for(int i = 0 ; i< n ; i++){
        if( arr[i]> largest){
            arr[i] = largest ;
        }
        for ()
     }
}  
// moves all the  zero end of the array
#include<iostream>
#include<vector>
using namespace std ;
 void pushZeroToEnd(vector<int> &arr){
    int n = arr.size();
    vector<int> temp ;

    int j = 0 ;
    for ( int i = 0 ; i< n ; i++){
        if( arr[i]!= 0 ){
            temp[j++] = arr[i];
        }
        while (j< n)
        {
        temp[j++] = 0 ;
        }

        
    }
    for(int i = 0 ; i <n ; i++)
    arr[i] = temp[i];
 }
 int main(){
    vector<int> arr = { 1,3,0,5,0,3,0,};
pushZeroToEnd(arr);
for( int num : arr){
cout << num << " ";
}
   return 0 ; 
 } 
// C++ Program to move all zeros to end using one traversal

#include <bits/stdc++.h>
using namespace std;

// Function which pushes all zeros to end of array
void pushZerosToEnd(vector<int>& arr) {
  
    // Pointer to track the position for next non-zero element
    int count = 0;
     
    for (int i = 0; i < arr.size(); i++) {

        // If the current element is non-zero
        if (arr[i] != 0) {
          
            // Swap the current element with the 0 at index 'count'
            swap(arr[i], arr[count]);
            // Move 'count' pointer to the next position
            count++;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
void assingn(int arr[] , int n ){
    sort(arr , arr+n)
    int ans[n] ;
        int ptr1 = 0, ptr2 = n - 1;

    for(int i = 0 ;i< n ; i++){
        if(i%2==0){
            ans[i] = arr[ptr2 --];
        }
        else{
            ans[i] = arr[ptr1 ++];
        }
    }
    for(int i = 0 ; i< n ; i++){
        cout<< ans[i]<<"";
    }
}
int main() {
        int arr[] = { 1, 2, 2, 1 };
 int n = sizeof(arr)/sizeof(arr[0]);
 assingn(arr , n);
 return 0 ;
} */
#include<iostream>
using namespace std ;
 int main(){
    int n = 8 ;
    for(int i = 0; i<=n ; i++){
        for(int j = 0 ; j<= n ; j++){
            cout<<j ;
        }
        cout<< endl ;
    }
    return 0 ;
 }