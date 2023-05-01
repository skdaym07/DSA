#include <iostream>
#include<limits.h>

using namespace std;
int findMin(int *arr, int&min, int len, int i){
    if(i>= len){
        return min;    
    }
    if(min > arr[i]) min = arr[i];
    return findMin(arr, min, len, i+1);
}


int findMax(int *arr, int&max, int len, int i){
    if(i>= len){
        return max;    
    }
    
    if(max < arr[i]) max = arr[i];
    return findMax(arr, max, len, i+1);
     
}

int main() {
    int arr[] = {2,3,43,50, 60};
    int len = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int min = INT_MAX;
    int i=0;
    max = findMax(arr, max, len, i);
    min = findMin(arr, min, len, i);

    cout<<"max of the array is:- "<< max<<endl;
    cout<<"min of the array is:- "<< min;
  return 0;
}