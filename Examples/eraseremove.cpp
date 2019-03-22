//  main.cpp
//  STLtestcode
//
//  Created by Minh Thành Nguyễn on 3/20/19.
//  Copyright © 2019 Minh Thành Nguyễn. All rights reserved.
//

// associative containers
// sequence containers

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	vector<int> v;


	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);
	v.push_back(80);

	cout << "BEFORE ERASE" << endl;
	//C++11 style
	for (auto &val:v)
		cout <<"vector value = " << val << endl;

	cout << "AFTER ERASE" << endl;

	v.erase(v.begin() + 3, v.begin() + 4);
	v.erase(v.begin() + 3, v.begin() + 4);

	for (auto &val:v)
		cout <<"vector value = " << val << endl;


	remove(v.begin(), v.end(), 10);

	cout << "AFTER REMOVE" << endl;

	for (auto &val:v)
		cout <<"vector value = " << val << endl;


	return 0;
}
