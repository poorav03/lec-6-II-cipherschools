// Lecture 6 II - Loops Pt 2

#include <iostream>
using namespace std;

int main(){
    int a=0, b=0, c=0;
    //post-increment and pre-increment
    cout << a << " " << b << " " << c << endl;
    b = a++;
    cout << a << " " << b << " " << c << endl;
    c = ++a;
    cout << a << " " << b << " " << c << endl;

    cout << endl;


    int i;
    for(i=1; i<101  ;i++){
        cout << i << " ";
    }
    return 0;
}