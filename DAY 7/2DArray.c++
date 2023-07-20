#include<iostream>
#include<vector>
using namespace std;


int main (){

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int arr2[3][3];
//trivarse the array

for(int i =0;i<3;i++){

for(int j =0;j<3;j++){

    cout<<arr[i][j]<<" ";
}
cout<<endl;
}


//transpose
for(int i =0;i<3;i++){

for(int j =0;j<3;j++){

    arr2[j][i] = arr[i][j];
}

}

cout<<endl;

cout<<"Transpose of matrix :  " << endl;
for(int i =0;i<3;i++){

for(int j =0;j<3;j++){

    cout<<arr2[i][j]<<" ";
}
cout<<endl;
}


cout<<"Row Wise Sum : "<<endl;
for(int i =0;i<3;i++){
int sum =0;
for(int j =0;j<3;j++){
sum = sum+arr[i][j];
    
}

cout<<"sum : "<<sum<<endl;
}


//column wise
cout<<"Column Wise Sum : "<<endl;
for(int i =0;i<3;i++){
int sum =0;
for(int j =0;j<3;j++){
sum = sum+arr[j][i];
    
}

cout<<"sum : "<<sum<<endl;
}





//create 2d matrix using vector :

vector<vector<int>>vact;
vector<int>v1{1,2,3};
vector<int>v2{4,5,6};
vector<int>v3{7,8,9};


vact.push_back(v1);
vact.push_back(v2);
vact.push_back(v3);


for(int i =0;i<vact.size();i++){
    for(int j =0;j<vact[i].size();j++){
        cout<<vact[i][j]<<" ";
    }

    cout<<endl;
}






    return 0;
}