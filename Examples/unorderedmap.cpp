//  main.cpp
//  STLtestcode
//
//  Created by Minh Thành Nguyễn on 3/20/19.
//  Copyright © 2019 Minh Thành Nguyễn. All rights reserved.

#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){

	unordered_map<int, int> mp;

	mp[4] = 400;
	mp[3] = 300;

	mp.insert(make_pair(21, 300));
	mp.insert(make_pair(3, 900));
	mp.insert(make_pair(4, 200));
	mp.insert(make_pair(11, 400));

	mp[10] = 700;


	for(auto it=mp.begin();it!=mp.end();it++){
		cout << it->first << "____" << it->second << endl;
	}

	return 0;
}
