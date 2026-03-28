#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    int i = 1;
    cout << (char)toupper(str[0]);

    while(i < str.size()){
        if (str[i] >= 65 && str[i] <= 90) {
            cout << "." << (char)toupper(str[i]);
        }else if (str[i] == '.' && i + 1 < str.size()){
            cout << str[i];
            cout << (char)toupper(str[i+1]);
            i++;
        }else {
            cout << str[i];
        }

        i++;
    }

    if(str[str.size() - 1] != '.'){
        cout << ".";
    }

    return 0;
}