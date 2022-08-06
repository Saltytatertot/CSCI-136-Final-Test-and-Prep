#include<iostream> 
using namespace std;



int main() {
    int i = 10;
    int *Ptr;

    Ptr = &i;
    cout << i     << endl;
    cout << &i    << endl;
    cout << Ptr   << endl;
    cout << &Ptr  << endl;
    cout << *Ptr  << endl;
    cout << *(&i) << endl;
}



