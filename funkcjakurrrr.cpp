#include <iostream>
#include <Windows.h>

using namespace std;

void FunkcjaKur()
{
    string input;
    int ilerazy;

    cout << "Podaj slowo: " << endl;
    cin >> input;
    if (input == "kurwa")
    {
        cout << "Eeee gosciu nie mow tak nie wolno" << "\n";
        Sleep(1000);
        exit(0);
    }
    cout << "Ile razy: " << endl;
    cin >> ilerazy;

    if (ilerazy > 100)
    {
        cout << "Slowo moze byc wyswietlone max 100 razy : ) " << "\n";
        Sleep(1000);
        exit(0);
    }

    for (int i = 0; i < ilerazy; i++) {     
           cout << input << "\n";
        
    }
}


int main()
{
    FunkcjaKur();
    return 0;
}

