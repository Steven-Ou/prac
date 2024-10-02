#include <iostream>
using namespace std;

int main() {
    int q[8]={0};
    int shu=0; // count
    int daan=0; // solution

    nextCo:
    shu++;
    if (shu==8) {
        goto print;
    }
    q[shu] = -1;

    nextR:
    q[shu]++;
    if (q[shu] == 8) {
        goto backtrack;
    }
    for (int i = 0; i < shu; i++) {
        if (q[shu] == q[i] || shu - i == abs(q[shu] - q[i])) {
            goto nextR;
        }
    }
    goto nextCo;

    backtrack:
    shu--;
    if (shu == -1) {
        return 0;
    }
    goto nextR;

    print:
    cout << "Solution " << ++daan << ": \n";
    for (int a = 0; a < 8; a++) {
        for (int b = 0; b < 8; b++) {
            if (q[a] == b) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    goto backtrack;
}
