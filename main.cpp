#include <iostream>

using namespace std;

int fib (int n) {
if (n <=1) {
    return (n);
}
    return ( fib(n-1) + fib(n-2));
}
int main() {
    int n , choise ;
   do{
    cout << " Enter your number of sequence : ";
    cin >> n;
    cout << " The number of Fibonacci " << n << " is : " <<"\n" << "  " << fib (n) << endl;
cout << " For continue , print : 1 "<< endl;
cin >> choise;
   } while(choise==1);
    return 0;
}
