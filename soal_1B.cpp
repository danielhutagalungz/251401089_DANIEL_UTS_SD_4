#include <iostream>
using namespace std;
int main() {
    int nilaiRata;
    system("cls"); 
    int nilai[5][4] = {
            {2, 4, 6, 8},
            {10, 12, 14, 16},
            {18, 20, 22, 24},
            {70, 70, 80, 90},
            {80, 90, 100, 20},
    };

    

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            nilaiRata = nilai[0][j] + nilai[1][j] + nilai[2][j] + nilai[3][j] + nilai[5][j] / nilai[5][4];
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Nilai rata-rata : " << nilaiRata;
}