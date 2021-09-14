#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int años, meses, maños;

    cout << "Cuantos años tienes" << endl;

    cin >>  años;

    cout << "Con cuantos meses" << endl;

    cin >> meses;

    maños=(años*12)+meses;

    cout << "Tienes " << maños << " Meses" << endl;

    return 0;
}
