#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int>& arr){
int n = arr.size();
for(int i = 0; i<n-1; i++){
        int min_index = i;
    for(int j = i+1; j < n; j++){
        if(arr[min_index] > arr[j]){
            min_index = j;
        }

    }
    if(i!=min_index){
      swap(arr[i],arr[min_index]);
    }

}

}

void printArr(vector<int>& arr){

for(int num : arr){
    cout<< num <<" ";

}
cout<<endl;

}

int main(){
vector<int> data = {5,6,3,5,6,1,0,2,8,9,7};
printArr(data);
selectionSort(data);
printArr(data);

return 0;
}
