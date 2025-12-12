#include<iostream>
using namespace std;

int main(){

    int number = -1;
    int evennumbers = 0;
    int oddnumbers = 0;
    
    while(number != 0){
        cout << "Enter an integer: ";
        cin >> number;
        if(number != 0){
            if(number %2 == 0){
                evennumbers++;
            }else{
                oddnumbers++;
            }
        }
    }
    cout << "#Even numbers = " << evennumbers << endl;
    cout << "#Odd numbers = " << oddnumbers << endl;
    return 0;
}
