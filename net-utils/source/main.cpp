#include <gtest/gtest.h>

//#include <iostream>

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    //std::cout << "Super" << std::endl;
    //return 0;
}