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
    int result = gen.getSuffixSize("corpses", "buried");
    EXPECT_EQ(1, result);
}

TEST(task3, test3) {
    MarkovGenerator gen = MarkovGenerator("test.txt", NPREF);
    int result = gen.getPrefixSize();
    EXPECT_EQ(2, result);
}

TEST(task4, test4) {
    MarkovGenerator gen = MarkovGenerator("test.txt", NPREF);
    int result = gen.getPrefixSize();
    EXPECT_EQ(2, result);
}
