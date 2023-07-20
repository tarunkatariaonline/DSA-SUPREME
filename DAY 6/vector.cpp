#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // vector<int>arr{2,4,5,6,7};
    // vector<int>arr1(10,-1);
    // vector<int>arr2;
    // arr2.push_back(2);
    // arr2.push_back(3);
    // arr2.push_back(4);

    // // for(auto i : arr){
    // //     cout<<i<<endl;
    // // }

    // cout<<arr.size()<<endl;
    // cout<<arr1.size()<<endl;
    // cout<<arr2.size()<<endl;

    // find unique element in an array :

    // vector<int>arr{1,3,3,1,5,4,2,4,2};

    // int ans = 0;

    // for(auto i : arr){

    //  ans = ans^i;
    // }

    // cout<<ans<<endl;

    // union of two array
    // vector<int> arr{1, 2, 3, 4, 5, 6};
    // vector<int> arr2{7, 8, 9};

    // vector<int> ans;

    // for (auto i : arr)
    // {
    //     ans.push_back(i);
    // }

    // for (auto i : arr2)
    // {
    //     ans.push_back(i);
    // }

    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }

    // inter section of two array
    // vector<int> arr{1, 3, 5, 7};
    // vector<int> arr2{2, 3, 4, 5};

    // vector<int> ans;

    // for (int i = 0; i < arr.size(); i++)
    // {

    //     for (int j = 0; j < arr2.size(); j++)
    //     {

    //         if (arr[i] == arr2[j])
    //         {
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }

    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }

    // union without no repetation

    //     vector<int>arr{1,2,3,4,5};
    //     vector<int>arr2{2,8,9,5,7};
    //     vector<int>ans;

    //     for(int i =0;i<arr.size();i++){
    //         for(int j=0;j<arr.size();j++){

    //             if(arr[i]==arr2[j]){
    //                 arr2[j] = -1;
    //             }
    //         }
    //     }

    // for(auto i :arr){
    //     ans.push_back(i);
    // }

    // for(auto i :arr2){
    //     if(i!=-1)
    //     ans.push_back(i);
    // }

    // for(auto i :ans){
    //     cout<<i<<" ";
    // }

    // 2 Sum problem

    // vector<int>arr{1,2,3,4,5,6};
    // vector<int>arr2{2,3,5,3,6,8};
    // vector<int>tempStore;
    // vector<vector<int>>ans;
    // int key =8;

    // for(int i =0;i<arr.size();i++){
    //     for(int j = 0;j<arr2.size();j++){
    //         if((arr[i]+arr2[j])==8){

    //             tempStore.push_back(arr[i]);
    //             tempStore.push_back(arr2[j]);
    //             ans.push_back(tempStore);
    //             tempStore.pop_back();
    //             tempStore.pop_back();

    //         }

    //     }
    // }

    // vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    // dublate;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int element = arr[i];
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {

    //         if (element + arr[j] == 8)
    //         {
    //             cout << element << " " << arr[j] << endl;
    //         }
    //     }
    // }


// vector<int>arr{0,1,1,1,0,0,1,0,0,1,0};
// int start = 0;
// int end = arr.size()-1;

// while(start<end){

// if(arr[start]==0){
//     start++;
// }

// if(arr[end]==1){
//     end--;
// }

// swap(arr[start],arr[end]);
// start++;
// end--;

// }


// for(auto i :arr){
//     cout<<i<<" ";
// }

// vector<int>arr{1,2,3,4,5,6,7};
// int size = arr.size();
// int ans[size];

// for(int i =0;i<arr.size();i++){

//     ans[(i+1)%7] = arr[i];
// }


// for(int i =0;i<arr.size();i++){
//     cout<<ans[i]<<endl;
// }


vector<int>arr{1,2,0,1,2,2,0,1,0,0};
int start =0;
int end = arr.size()-1;
int mid =0;

while(mid<=end){

 
    if(arr[mid]==0){
        swap(arr[start],arr[mid]);
        mid++;
        start++;
    }

else if(arr[mid]==1){
    mid++;
}
  else  if(arr[mid]==2){
        swap(arr[mid],arr[end]);
        end--;
       
    }


    


       if(arr[mid]==1){
        mid++;
    }

    
}

for(auto i:arr){
    cout<<i<< ' ';
}
    return 0;
}