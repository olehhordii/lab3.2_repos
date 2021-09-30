
using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;
    double x;
    double F; //формула
    
    cout << " a = " << endl; cin >> a;
    cout << " b = " << endl; cin >> b;
    cout << " c = " << endl; cin >> c;
    cout << " x = " << endl; cin >> x;

    // спосіб 1: розгалуження в скороченій формі
    
    if (a < 0 && c != 0){
        F = a * pow(x, 2) + b * x + c;
    }
        
    if (a > 0 && c == 0) {
        F = (-a) / (x - c);
    }
    if (!(a < 0 && c != 0) && !(a > 0 && c == 0)) {
        F = a*(x-c);
    }
    cout << endl;
    cout << "1) F = " << F << endl;


    // спосіб 2: розгалуження в повній формі
    
    if (a < 0 && c != 0) 
        F = a * pow(x, 2) + b * x + c;
    else
        if (a > 0 && c == 0) 
            F = (-a) / (x - c);
        else
            F = a * (x - c);
    cout << "2) F = " << F << endl;
    



    cin.get();
    return 0;

}


