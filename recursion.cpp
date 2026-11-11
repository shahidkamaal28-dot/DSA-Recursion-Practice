#include<iostream>
using namespace std;

int recFactorial(int n){

    if(n==0 || n==1){
        return 1;
    }
    else{
       return n*recFactorial(n-1);
    }
}

    int iteFactorial(int n){
        int fact = 1;

    for(int i = 1; i<=n; i++){
       fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    recFactorial(n);
    iteFactorial(n);
    cout<<"Recursive Facrorial of "<< n<<"= "<<recFactorial(n)<<endl;
    cout<<"Iterative Facrorial of "<< n<<"= "<<iteFactorial(n);
}