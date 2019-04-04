#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main() {
    cout << "\t RASHODNIK 228 BY DJ VASYAN" << endl;
    int menuchoose;
    int tempincome=0;
    int tempfood=0;
    int tempclean=0;
    int income=0;
    int food=0;
    int clean=0;
    int balance = tempclean - tempfood;
     while (menuchoose != 0) {
        cout << "\t \t MENU" << endl;
        cout << "1. Income " << income << endl;
        cout << "2. Food " << food << endl;
        cout << "3. Cleaning products " << tempclean << endl;
        cout << "Now your balance  " << balance << endl;
        cout << "If you want out, enter 0" << endl;
        cin >> menuchoose;
        switch (menuchoose) {
            case 1:
                cout << "1. Income" << endl;
                cin >> tempincome;
                income+=tempincome;
                break;
            case 2:
                cout << "2. Food" << endl;
                cin >> tempfood;
                food+=tempfood;
                break;
            case 3:
                cout << "3. Cleaning products" << endl;
                cin >> clean;
                clean+=tempclean;
                break;
            default:
                cout << "You enter wrong item" << endl;
                break;
        }
      }
    return 0;
}
