#include <iostream>
#include <string>
#include <ctime>

using namespace std;



int main(){
    int arr[10];
    for (int & i : arr) {
        i=rand();
        cout<<"asdf"<<'\t'<<endl;
    }
}
