#include <iostream>                      
using namespace std;                     
int main() {                             
    double X, Y;                         
    cin >> X >> Y;                       
    double sum = X;                      
    int d = 1;                         
    if (sum < Y) {                       
        do {                             // функция действия с постпроверкой
            sum *= 1.1;
            d++;
        } while (sum < Y);
    }                                    
    cout << d << endl;                 
    return 0;                            
}