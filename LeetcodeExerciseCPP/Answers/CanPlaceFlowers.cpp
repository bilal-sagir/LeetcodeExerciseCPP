//
//  CanPlaceFlowers.cpp
//  LeetcodeExerciseCPP
//
//  Created by Bilal on 8.09.2024.
//

#include "CanPlaceFlowers.hpp"

bool CanPlaceFlowers::canPlaceFlowers(vector<int> flowers, int n) {
    auto flwrs = flowers;
    int count = 0;
    for (int i = 0; flwrs.size() - 1; i++) {
        
        if (flwrs.size() == 1) {
            if (flwrs[0] == 0) {
                return 1 >= n;
            } else {
                return 0 == n;
            }
        }
        
        if (i != 0 && i != flwrs.size() - 1) {
            if (flwrs[i] == 0 && flwrs[i - 1] == 0 && flwrs[i + 1] == 0) {
                flwrs[i] = 1;
                count ++;
            }
        }
        
        if (i == 0) {
            if (flwrs[i] == 0 && flwrs[i + 1] == 0) {
                flwrs[i] = 1;
                count ++;
            }
        }
        
        if (i == flwrs.size() - 1) {
            if (flwrs[i] == 0 && flwrs[i - 1] == 0) {
                count++;
            }
        }
    }
    return count >= n;
}
