   // 112358 13 21 34 55 ................
   #include<iostream>
   using namespace std;
   int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo (n-1)+fibo(n-2);
   }
   int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<fibo(n);
   }               