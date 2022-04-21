// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include "textgen.h"

TEST(task1, test1) {
    MarkovGenerator gen = MarkovGenerator("test.txt", NPREF);
    int result = gen.getPrefixSize();
    EXPECT_EQ(2, result);
}

TEST(task2, test2) {
    MarkovGenerator gen = MarkovGenerator("test.txt", NPREF);
    std::vector<std::string> result = gen.getSuffix("corpses", "buried");
    std::vector<std::string> waitForSuffix = {"for"};
    EXPECT_EQ(waitForSuffix, result);
}

TEST(task3, test3) {
    MarkovGenerator gen = MarkovGenerator("test.txt", NPREF);
    int result = gen.getSuffixSize("corpses", "buried");
    EXPECT_EQ(1, result);
}
