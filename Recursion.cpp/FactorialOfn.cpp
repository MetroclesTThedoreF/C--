#include<iostream>
using namespace std;
long long int fact(int n){
    if(n == 0 || n == 1) return 1;
    return n * fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    fact(n);
    cout<<"Factorial of "<<n<<" is : "<<fact(n);
}