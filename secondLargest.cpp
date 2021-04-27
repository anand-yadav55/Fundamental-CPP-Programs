#include<bits/stdc++.h>
using namespace std;
string secondLargestBySorting(int arr[], int size){
    if(size<2){
        cout<<"The array should have atleast two elements";
        return "cannot be determined";
    }
    sort(arr,arr+size);
    ostringstream str1;
    for(int i=size-2;i>=0;i--){
        if(arr[i]!=arr[size-1]){
            str1<<arr[i];
            string largestSecond = str1.str();
            return largestSecond;
        }
    }
    return "cannot be determined";
}
string secondLargestByTraversal(int arr[], int size){
//First find largest then assign it minimum value again traverse and find largest;
    
    if(size<2){
        cout<<"cannot find second largest. Size of array should be atleast greater than 1";
        return "CANNOT FIND";
    }
    int largest=arr[0], idx=0;
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
            idx=i;
        }
    }
    arr[idx]=INT_MIN;
    largest=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    
    return to_string(largest);
}
int main(void){
    int arr[]={12, 35, 1, 10, 34, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargestBySorting(arr,size);
    cout<<endl<<secondLargestByTraversal(arr,size);
    return 0;
}