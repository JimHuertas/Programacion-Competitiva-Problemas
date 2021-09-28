#include <iostream>
using namespace std;

int main(){
    char text[100];
    string todo = "";

    while(cin.getline(text, 100, '\n')){
        char *ptr = text;
        todo = ptr;
        cout<<todo<<endl;
    }

    return 0;
}