#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArr(vector<int> arr){

for(int num:arr){
   cout << num << " ";
}

}


int main(){

vector<int> data={1,6,7,3,5,9,4,8};
printArr(data);
cout<<endl;
bubbleSort(data);
printArr(data);

return 0;
}
