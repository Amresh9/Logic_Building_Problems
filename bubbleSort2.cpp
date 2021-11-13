#include<iostream>
using namespace std;

int bubbleSort(int arr[]){
    int n =9;
for (int  round = 0; round < n; round++)
{
    for (int i = 0; i <n-round; i++)
    {
        if (arr[i]>arr[i+1]){
int temp =arr[i]; 
arr[i] = arr[i+1];
arr[i+1] = temp;
            
        }
    }
    
}

}
 void printSort(int arr[]){
     int n = 9;
     for(int i = 0; i <n;i++)
     cout<<arr[i]<<" ";
 }

int main(int argc, char** argv){
int arr[]={9,8,7,6,5,4,3,2,1};
bubbleSort(arr);
printSort(arr);

}