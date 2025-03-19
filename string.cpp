#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;
namespace strutil{

string toUpper(string stri) {
    for (int i = 0; i < stri.length(); i++) {
        if (stri[i] >= 'a' && stri[i] <= 'z') {
            stri[i] = stri[i] - 32;
        }
    }
    return stri;
}

string rand(int length) {
    string str = "";
    for (int i = 0; i < length; i++) {
        str += (char)('a' + ::rand() % 26);
    }
    return str;
}


int longestWordLength(const string &text) {
    int maxLength = 0, currentLength = 0;
    
    for (char c : text) {
        if (c != ' ') {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }
    maxLength = max(maxLength, currentLength);
    
    return maxLength;
}
}

int main(){
    string stri = strutil::toUpper("toupper");
    cout << "Only uppercase: " << stri << endl;
   srand(time(NULL));
    string str = strutil::rand(100);
    cout << "random string is: " << str << endl;
    std::string text = "blah blah blah ble ble ble blu blu blu linganguli wata ";
    std::cout << "longest word in sentence is: " << strutil::longestWordLength(text)<< "characters long" << std::endl;
    return 0;
}




