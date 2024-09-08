//
//  KidsWithCandies.cpp
//  LeetcodeExerciseCPP
//
//  Created by Bilal on 8.09.2024.
//

#include "KidsWithCandies.hpp"

vector<bool> KidsWithCandies::kidsWithCandies(vector<int> &nums, int e) {
    vector<bool> output;
    
    for(int item: nums) {
        vector<bool> isBigger;
        int newItem = item + e;
        
        for(int candy: nums) {
            isBigger.push_back(newItem >= candy);
        }
        
        output.push_back(all_of(isBigger.begin(), isBigger.end(), [](bool b) { return b; }));
    }
    return output;
}
