// Copyright 2022 UNN-IASR
#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <fstream>

using namespace std;

const int NPREF = 2;
const int MAXGEN = 1000;

class MarkovGenerator {
private:
    int prefixSize;
    typedef deque<string> prefix;
    map<prefix, vector<string> > statetab;
    vector<string> words;
public:
    MarkovGenerator(string path, int preflen);
    string getText(int wordsamount);
    int getPrefixSize();
};
