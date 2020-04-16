//
// Created by phiysng on 2020/4/16.
//

#include "doctest.h"
#include <unistd.h>
#include <vector>
#include <src/quick_sort.cpp>

TEST_CASE ("sleep a second") {
            CHECK(sleep(1) == 0);
}

TEST_CASE ("sort reversed vector") {
    typedef std::vector<int> VecInt;
    VecInt v{9, 8, 7, 6, 5, 4, 3, 2, 1};

    quick_sort(v, 0, v.size());
            CHECK_EQ(v, VecInt{1, 2, 3, 4, 5, 6, 7, 8, 9});
            // CHECK_EQ(VecInt{0}, VecInt{});

}