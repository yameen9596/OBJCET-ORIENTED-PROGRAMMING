#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of square matrices (up to 100): ";
    cin >> n;

    if (n > 100) {
        cout << "Matrix size too large! Please enter up to 100." << endl;
        return 0;
    }

    int A[100][100], B[100][100];
    cout << "\nEnter elements of Matrix A (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of Matrix B (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

  
    int C_int[100][100] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C_int[i][j] += A[i][k] * B[k][j];
            }
        }
    }

  
    float A_f[100][100], B_f[100][100];
    double A_d[100][100], B_d[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A_f[i][j] = (float)A[i][j];
            B_f[i][j] = (float)B[i][j];
            A_d[i][j] = (double)A[i][j];
            B_d[i][j] = (double)B[i][j];
        }
    }

   
    float C_float[100][100] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C_float[i][j] += A_f[i][k] * B_f[k][j];
            }
        }
    }

  
    double C_double[100][100] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C_double[i][j] += A_d[i][k] * B_d[k][j];
            }
        }
    }

   
    cout << "\nResult using Integer:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C_int[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nResult using Float:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C_float[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nResult using Double:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C_double[i][j] << " ";
        }
        cout << endl;
    }


    cout << "Integer type: may overflow for large numbers (> 32,000).\n";
    cout << "Float type: lower precision (~7 digits).\n";
    cout << "Double type: higher precision (~15 digits), best accuracy.\n";

    return 0;
}

