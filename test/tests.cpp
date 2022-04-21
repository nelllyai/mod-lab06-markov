// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include "textgen.h"

TEST(task1, test1) {
    MarkovGenerator gen = MarkovGenerator("test.txt", NPREF);
    int result = gen.getPrefixSize();
    EXPECT_EQ(2, result);
}
