#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main() {
    srand(time(NULL));
    cout << "Guess number" << endl;
    int a;
    cout << "Ent num" << endl;
    cin >> a;
    cout << "Here we go" << endl;
    cout << "ent preddiction num" << endl;
    int c;
    int i=1;
    cin >> c;
    while(c!=a){
        if (c<a){
            cout << "ur num is lover" << endl;
            cin >> c;
        }
        else if(c>a){
            cout << "ur num is upper" << endl;
            cin >> c;
        }
        i++;
    }
    cout << "ur amazing! Num is " <<c<<" you tried "<<i<<" times"<< endl;
    return 0;
}
