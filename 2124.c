// 2124. Check if All A's Appears Before All B's

#include <stdbool.h>

bool checkString(char* s) {
    bool foundB = false;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == 'b'){
            foundB = true;
        }else if (foundB){
            return false;
        }
    }

    return true;
}