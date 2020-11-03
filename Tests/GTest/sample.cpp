#include <gtest/gtest.h>
#include "RootMath.hpp"
#include <math.h>

TEST(a, b){
    ASSERT_TRUE(true);
}

TEST(FactorialTest, HandlesZeroInput) {
    EXPECT_EQ(SimpleMathOperation::Factor(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(SimpleMathOperation::Factor(1), 1);
    EXPECT_EQ(SimpleMathOperation::Factor(2), 2);
    EXPECT_EQ(SimpleMathOperation::Factor(3), 6);
    EXPECT_EQ(SimpleMathOperation::Factor(8), 40320);
}

TEST(FibboTest, HandlesZeroInput){
    EXPECT_EQ(SimpleMathOperation::Fibbo(0), 0);
}
TEST(FibboTest,  HandlesPositiveInput){
    EXPECT_EQ(SimpleMathOperation::Fibbo(1), 1);
    EXPECT_EQ(SimpleMathOperation::Fibbo(3), 2);
    EXPECT_EQ(SimpleMathOperation::Fibbo(9), 34);
}

TEST(RootCalculator,RootCalc){
    EXPECT_EQ(round(MathLibrary::RootCalc(16,2)), 4);
    EXPECT_EQ(round(MathLibrary::RootCalc(144,2)), 12);
    EXPECT_EQ(round(MathLibrary::RootCalc(1728,3)), 12);
}
