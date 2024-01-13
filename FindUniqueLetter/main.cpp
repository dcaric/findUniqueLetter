//
//  main.cpp
//  FindUniqueLetter
//
//  Created by Dario Caric on 13/01/2024.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, const char * argv[]) {

    string s = "adsgshjgfsdhj";
    
    map<char, int> myDict;

    for (int i = 0; i < s.length(); i++) {
        if ( i == 0) myDict.insert({s[i], 1});
        else {
            bool found = false;
            for (const auto &p : myDict) {
                if (p.first == s[i]) {
                    myDict[p.first] = p.second + 1;
                    found = true;
                    break;
                }
            }
            if (!found) {
                myDict.insert({s[i], 1});
            }
        }
    }
    
    for (const auto &p : myDict) {
        cout << p.first << " " << p.second << endl;
    }
    

    return 0;
}
