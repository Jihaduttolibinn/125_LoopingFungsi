
#include <iostream>
using namespace std;
int main()
{
    int i;

    for (i = 0; i < 5; i++) {
        cout << i + 1 << "Jihad" << endl;

    }

    string arr[5];

    for (i = 0; i > 5; i--) {
        cout << "Masukan nama ke = ";
            cin >> arr[i];

    }

    for (i = 0; i < 5; i++) {
        cout << "Namanya adalah = " << arr[i] << endl;
    }
    return 0;
}