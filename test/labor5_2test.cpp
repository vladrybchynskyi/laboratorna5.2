#include "../labor5_2.hpp"
#include "gtest/gtest.h"
#include <cmath>
# define PI 3.14159265358979

TEST(FunctionATest, CalculatesCorrectTerm) {
    // Тест для n = 1 і x = 1
    double a = -PI / 2;
    double result = A(1.0, 1, a);
    EXPECT_NEAR(result, a * (-1 / (1 * pow(1.0, 1))), 1e-6);

    a = -PI / 2;
    result = A(2.0, 2, a);
    EXPECT_NEAR(result, a * (-1 / (2 * pow(2.0, 2))), 1e-6);
}

TEST(FunctionSTest, CalculatesSeriesSum) {

    int n = 0;
    double s = 0.0;
    double result = S(1.0, 1e-6, n, s);
    
    EXPECT_NEAR(result, atan(1.0), 1e-6);


    n = 0;
    result = S(0.5, 1e-6, n, s);
    
    EXPECT_NEAR(result, atan(0.5), 1e-6);
}