// Copyright 2022 UNN-IASR
#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <fstream>

const int NPREF = 2;
const int MAXGEN = 1000;

class MarkovGenerator {
private:
    int prefixSize;
    typedef std::deque<std::string> prefix;
    std::map<prefix, std::vector<std::string> > statetab;
    std::vector<std::string> words;
public:
    MarkovGenerator(std::tring path, int preflen);
    string getText(int wordsamount);
    int getPrefixSize();
};
