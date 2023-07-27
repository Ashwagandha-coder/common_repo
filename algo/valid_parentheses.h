//
// Created by Мухамадиев Данил Дамирович on 27.07.2023.
//

#ifndef ABSTRACT_REPO_VALID_PARENTHESES_H
#define ABSTRACT_REPO_VALID_PARENTHESES_H


#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string str) {
        char prev;
        int count = 0;
        if (str[0] == ')' || str[0] == '}' || str[0] == ']') {
            return false;
        }
        for (char elem : str) {
             if (elem == ')') {
                 if (prev == '(') {
                     continue;
                 } else {
                     return false;
                 }
             }
             if (elem == '}') {
                 if (prev == '{') {
                     continue;
                 } else {
                     return false;
                 }
             }
             if (elem == ']') {
                 if (prev == '[') {
                     continue;
                 } else {
                     return false;
                 }
             }
             prev = elem;

        }
        return true;
    }
};


#endif //ABSTRACT_REPO_VALID_PARENTHESES_H
