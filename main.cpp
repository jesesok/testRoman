#include <iostream>
#include <string>
#include <ctime>

using namespace std;



int main(){
    int arr[10];
    for (int i = 0; i <10 ; ++i) {
        arr[i]=rand();
        cout<<arr[i]<<'\t'<<endl;
    }
}
