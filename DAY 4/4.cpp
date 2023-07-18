#include<iostream>
using namespace std;

void printNumber(int num){

cout<<num<<endl;
return ;
}


void printName(){

for(int i =1;i<=5;i++){
    cout<<"Tarun Kataria"<<endl;
}

}


int sum(int a, int b){

    return a+b;
}


int findMax(int a, int b, int c){

if(a>=b && a>=c){
    return a;
}else if (b>=a && b>=c){
    return b;
}else{
    return c;
}


}


void counting(int n){

for(int i =1;i<=n;i++){
    cout<<i<<endl;
}

}


int evenSum(int n){

int sum =0;

for(int i =1;i<=n;i++){
    if(i%2==0){
        sum = sum+i;
    }
}

return sum ;
}



float areaOfCircle(int r){

return 3.14*r*r;

}


bool checkEven(int num){

if(num%2==0){
    return true;
}

return false;
}


// int fact(int num){
// int factorial = 1;

// for(int i =1;i<=num;i++){
//     factorial = factorial*i;
// }

// return factorial;

// }



bool isPrime(int num){

for(int i =2;i<=num/2;i++){

if(num%i==0){
    return false;
}

}

cout<<num<< " " ;
return true;
}




void  printNPrimeNum(int num){

for(int i =2;i<=num;i++){

isPrime(i);

}

}



int revNum(int num){

int cpy = num;
int rev =0;
while(cpy!=0){
int r = cpy%10;
rev = rev*10 + r;
cpy/=10;

}


return rev;

}



int setKthBit(int num,int k){

// pos==   3210
// 10 ---> 1010
//set 3 bit to 1 == 1110 ==>14
// take value 1 and set by k === 100 using << oprator
//take bitwise OR of value and num it will be forteeen 
int value = 1;
value = 1<<k;
// cout<<value<<endl;
int ans = num|value;
 return ans;

 }



 float toForanite(int temp){
 
 // formula = 32 + 1.5*temp
 

 float data = float(9)/5;

 return 32+(data*temp);


 }

 float toCelcuis(float temp){
    //formula = (temp-32)/1.5;

float data = float(9)/5;
return (temp-32)/data;    
 }

int main (){

// printNumber(5);

// printName();

// cout<<sum(3,4)<<endl;
// cout<<findMax(3,5,1)<<endl;

// counting(5);

// cout<<evenSum(10)<<endl;
    
    // cout<<areaOfCircle(5)<<endl;

    // if(checkEven(6)){
    //     cout<<"Even"<<endl;
    // }else{
    //     cout<<"Odd"<<endl;
    // }

    // cout<<fact(5)<<endl;
       

// if(isPrime(13)){
//     cout<<"Prime Number";
// }else{
//     cout<<"Not a prime Number";
// }
  

//   printNPrimeNum(50);


// cout<<revNum(345)<<endl; 
 
//  cout<<setKthBit(10,2)<<endl;
//  cout<<toForanite(37)<<endl;
//  cout<<toCelcuis(98.6)<<endl;
    return 0;
}