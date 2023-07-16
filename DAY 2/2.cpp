#include<iostream>
using namespace std;

int main (){
// int score;
// cout<<"Enter score : ";
// cin>>score;

// if(score>300){
//     cout<<"India wins.";
// }else{
//     cout<<"Pakisthan wins.";
// }


// int age;
// cout<<"Enter your age : "<<endl;
// cin>>age;

// if(age>=18){
//     cout<<"You can vote"<<endl;
// }else{
//     cout<<"You can't vote "<<endl;

// }    


// int marks;
// cout<<"Enter your marks : ";
// cin>>marks;

// if(marks>=90){

//     cout<<"Grade A++ "<<endl;
// }else if (marks>=80){
//     cout<<"Grae A"<<endl;
// }else if(marks>=60){
//     cout<<"Grade B"<<endl;
// }else if (marks>=50){
//    cout<<"Grade C"<<endl;
// }
// else if (marks>=40){
//    cout<<"Grade D"<<endl;
// }else{
//     cout<<"You are Fail";
// }


//loops

// for(int i =0;i<5;i++){
//     cout<<"Tarun Kataria"<<endl;
// }




// for(int i=1;i<=5;i++){
//     cout<<i<<endl;
// }


//printing solid rectangle

// *****
// *****
// *****
// *****
// *****

// int row;
// int col;

// for(row=0;row<5;row=row+1){

//     for(col=0;col<5;col=col+1){
//         cout<<"*";
//     }

//     cout<<""<<endl;
// }


// for(int row =1;row<=5;row++){
//     for(int col =1;col<=5;col++){
//         if(row==1 || row==5 || col==1 || col==5){
          
//           cout<<"*";
            
//         }else{
//             cout<<" ";
//         }
//     }

//     cout<<endl;
// }



// *
// **
// ***
// ****

// for(int row =0;row<5;row++){
//     for(int col =0;col<=row;col++){
//           cout<<"*";
//     }

//     cout<<""<<endl;
// }


// for(int row =0;row<5;row++){
//     for(int col=4;col>=row;col--){

//         cout<<"*";
//     }

//     cout<<endl;
// }


// for(int row =1;row<=5;row++){
//     for(int col=1;col<=row;col++){

//         cout<<col;
//     }

//     cout<<endl;
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// for(int row =1;row<=5;row++){

//     for(int space=1;space<5-row+1;space++){
//       cout<<" ";
//     }
//     for(int col=1;col<=row;col++){

//       cout<<"* ";
//     }

// cout<<endl;
// }



//  * * * * * 
//   * * * *
//    * * *
//     * *
//      *

for(int row =1;row<=5;row++){

     for(int k=1;k<=row;k++){
        cout<<" ";
     }
    for(int col=5;col>=row;col--){
      cout<<"* ";
    }
    cout<<endl;
}
return 0;
}