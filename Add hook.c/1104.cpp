#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// the below function which we have written will help us with removing the   
// duplicate elements in the array which are passed into it as an argument  
// it will return us the size of the new modified array once finishing   
// the operation of removing the duplicate elements  
int removeDuplicates(int arr[], int n)  
{  
      
      
    // this is a small (if) check condition where we will be checking if   
    // whether the element which is passed as an argument contains one element  
    // or no elements and return the n value if the condition is true.  
    if (n == 0 || n == 1)  
        return n;  
  
    int temp[n];  
  
  
    // from j equals to 0 onwards; we start traversing the elements in the  
    // array passed as an argument  
      
    // we have an uninitialised variable j to 0, which can then start   
    // traversing from 0 to the ray's size w, n-1.  
      
    int j = 0;  
      
    // this simple for loop has a  simple check condition where we check if   
    // the present element where we are trying to store is equal to the next   
    // element or not  
    for (int i = 0; i < n - 1; i++)  
        if (arr[i] != arr[i + 1])  
            temp[j++] = arr[i];  
  
    // Store the last element as whether it is unique or  
    // repeated, it hasn't been used previously  
    // whether the last part of the array is individual, a repeated one  
   // we are trying to keep here what was not, therefore in the code  
    temp[j++] = arr[n - 1];  
  
    // we are trying to store the array in the temporary array created   
    // after modifying the original array using a simple for loop  
    for (int i = 0; i < j; i++)  
        arr[i] = temp[i];  
  
    return j;  
}
int main(){
    int n1,n2;
    vector<int>v1,v2;
    while(1){
        cin>>n1>>n2;
        if (n1==0 &&n2==0){
            break;
        }

        int arr1[n1],arr2[n2];
        for (int i=0;i<n1;i++){
            cin>>arr1[i];
        }
        sort(arr1,arr1+n1);
        n1=removeDuplicates(arr1, n1);


        for (int i=0;i<n2;i++){
            cin>>arr2[i];
        }
        sort(arr2,arr2+n1);
        n2=removeDuplicates(arr2,n2);
        int count=0;
        if (n1<=n2){
            for (int i=0;i<n1;i++){
                for (int j=0;j<n2;j++){
                    if (arr1[i]==arr2[j]){
                        count++;
                        break;
                    }

                }
            }
            cout<<n1-count<<endl;
        }
        else if (n2<n1){
            for (int i=0;i<n2;i++){
                for (int j=0;j<n1;j++){
                    if (arr2[i]==arr1[j]){
                        count++;
                        break;
                    }

                }
            }
            cout<<n1-count<<endl;
        }




        
    }



    return 0;
}