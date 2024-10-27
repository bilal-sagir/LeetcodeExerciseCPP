//
//  ReverseWordsInAString.cpp
//  LeetcodeExerciseCPP
//
//  Created by Bilal on 26.10.2024.
//

#include "ReverseWordsInAString.hpp"
#include <iostream>
string ReverseWordsInAString::reverse(string s) {
    
    vector<string> words;
    string word = "";
    char empty = ' ';
    string input = s.append(1, empty);
    
    for (int i = 0; i < input.size() ; i++ ) {
        if (input[i] != empty) {
            word += input[i];
        } else {
            if (word.size() > 0) {
                words.push_back(word);
                word = "";
            }
        }
    }
    
    string output;
    
    for (int i = words.size() - 1;  i >= 0; i--) {
        output += words[i];
        if (i != 0) {
            output += " ";
        }
    }
    return output;
}
