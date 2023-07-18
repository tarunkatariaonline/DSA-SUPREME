#include<iostream>
using namespace std;

int main (){

// int arr[5] = {1,2,5,14,3};






// cout<<"Enter array Elements : ";
// for(int i =0;i<5;i++){
//     cin>>arr[i];
// }

// cout<<"Output Array : ";

// for(int i =0;i<5;i++){

//     cout<<2*arr[i]<<" ";
// }



//liner search;


// int arr[5] = {1,2,5,14,3};

// int flag = 0;
// int key;
// int pos = 0;
// cout<<"Enter a key element : ";
// cin>>key;

// for(int i =0;i<5;i++){
    
//     if(arr[i]==key){
//         flag = 1;
//         pos= i+1;
//         break;
//     }
// }


// if(flag){
//     cout<<key <<" found at Positon : "<<pos<<endl;
// }else{
//     cout<<"Value not found";
// }




//count 0's and 1's in array 

// int arr[] = {1,0,0,1,0,1,0,1,1,1,0,1,0,0,1,1,1,0,1,0};

// int size =20;
// int numOfZeros = 0;
// int numOfOnes = 0;


// for(int i =0;i<size;i++){

//     if(arr[i]==0){
//         numOfZeros++;
//     }else{
//         numOfOnes++;
//     }
// }


// cout<<"Number of One's : "<< numOfOnes<<endl;
// cout<<"Number of Zero's : "<<numOfZeros<<endl;


//find max element in an array 


// int arr[10]={2,1,4,2,7,15,9,6,2,5};
// int max = INT16_MIN;


// for(int i =0;i<10;i++){

// if(max<arr[i]){
//     max = arr[i];
// }    
// }

// cout<<max<<endl;



//exterme print array
 
 // 2 3 4 5 6 7 8
 //o/p - 2 8 2 7 4 6 5


//  int arr[]={2,3,4,5,6,7,8};

//  int start =0;
//  int end = 6;


//  while(true){
    
//     if(end<start){
//         break;
//     }


//     if(start!=end){
//     cout<<arr[start]<<" ";
//      cout<<arr[end]<<" ";
//     }else{
//         cout<<arr[start]<<" ";
//     }
//   start++;
//    end--;
 


//  }



//reverse an array 


// int arr[]={2,3,4,5,6,7,8};

// int start = 0;
// int end =6;

// while(start<=end){

// int temp = arr[start];
// arr[start] = arr[end];
// arr[end]= temp;
// start++;
// end--;
// }


// for(int i =0;i<7;i++){

//     cout<<arr[i]<<" ";
// }




    return 0;
}