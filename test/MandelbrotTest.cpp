#include <iostream>

#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"

#include <gtest/gtest.h>

struct MandelbrotTest : public :: testing::Test {
    virtual void SetUp() override {

    }

    virtual void TearDown() override {

    }
};

TEST_F(MandelbrotTest, Dummytest){
    EXPECT_EQ("hello", "hello");
    EXPECT_EQ(5, 7);
}