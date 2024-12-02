//day01.cpp
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>

using namespace std;
int main() {
	fstream input_data;
	input_data.open("day01.in");
	string line_holder;

	vector<int> left, right;
	int dummy_left, dummy_right;

	while (input_data >> dummy_left >> dummy_right) {
		left.push_back(dummy_left);
		right.push_back(dummy_right);
	}
	input_data.close();

	sort(left.begin(), left.end());
	sort(right.begin(), right.end());

	int size = left.size();

	int total_distance = 0;
	for (int i = 0; i < size; i++) {
		total_distance += abs(left[i] - right[i]);
	}
	cout << total_distance << endl;

	int similarity_score = 0;
	for (int i = 0; i < size; i++) {
		int l = left[i];
		similarity_score += l * count(right.begin(), right.end(), l);
	}

	cout << similarity_score << endl;
}
