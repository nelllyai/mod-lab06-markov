#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <sstream>
#include <fstream>
#include <random>

using namespace std;

class MarkovGenerator {
private:
	int prefixSize;
	typedef deque<string> prefix;
	map<prefix, vector<string> > statetab;
	vector<string> words;
public:
	MarkovGenerator(string path, int preflen);
	string getText(int wordsamount);
	int getFirstPrefixSize();
};