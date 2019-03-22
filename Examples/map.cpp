//  main.cpp
//  STLtestcode
//
//  Created by Minh Thành Nguyễn on 3/20/19.
//  Copyright © 2019 Minh Thành Nguyễn. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
	// associate containers
	// stored as Key-Value Pairs

	map<int, int> mp;

    // direct access is allowed
	mp[4] = 400;
	mp[3]  = 300;

	mp.insert(make_pair(10, 100));
	//mp.insert(make_pair(10, 700));

	mp[10] = 700;

	for (auto it = mp.begin(); it != mp.end(); it++){
		cout << it->first << "___" << it->second << endl;
	}

	pair <int, int> p = make_pair(10, 20);
	cout << p.first << "-" << p.second << endl;
	return 0;
}
