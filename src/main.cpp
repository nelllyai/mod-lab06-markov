// Copyright 2022 UNN-IASR
#include "textgen.h"

int main() {
	MarkovGenerator gen = MarkovGenerator("test.txt", NPREF);
	cout << gen.getText(MAXGEN) << endl;
}
