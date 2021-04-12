#include <iostream>
#include <moduleskondrashenko.h>

using namespace std;

int main()
{
    float x[10] = {1, 5, 8, 12, 2, 55, 15, 0.5, 17, 21};
    float y[10] = {1, 5, 8, 12, 2, 55, 15, 0.5, 17, 21};
    float z[10] = {1, 5, 8, 12, 2, 55, 15, 0.5, 17, 21};
    float S[10] = {2.77, 8.96, 13.01, 18.14, 4.51, 68.14, 21.86,  1.75, 24.31, 29.12};

    for(int i = 0; i < 10; i++){
        if(s_calculation(x[i], y[i], z[i]) == S[i]){
            cout << "x = " << x[i] << ", y = " << y[i] << ", z = " << z[i] << endl;
            cout << "Passed - testing result = " << S[i] << endl;
        }
        else{
            cout << "Testing result - " << s_calculation(x[i], y[i], z[i]) << endl;
            cout << "Failed - testing result != " << S[i] << endl;
        }
    }

    getchar();
    return 0;
}
