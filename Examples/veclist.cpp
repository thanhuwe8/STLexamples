//
//  main.cpp
//  STLtestcode
//
//  Created by Minh Thành Nguyễn on 3/20/19.
//  Copyright © 2019 Minh Thành Nguyễn. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(){
	// Vector
	cout << "_________VECTOR_________" << endl;

	vector<int> v;
	v.push_back(100);
	v.push_back(20);
	v.push_back(400);
	v.push_back(35);

	// perform on the vector
	sort(v.begin(), v.end());

	//iterator are similar to pointers.
	vector<int>::iterator itr = v.begin();

	for(;itr!=v.end();itr++){
		cout << "Value = " << *itr << endl;
	}
	cout << "Size = " << v.size() << endl;

	v.clear();

	cout << "Size = " << v.size() << endl;


	cout << "_________LIST_________" << endl;

	list<int> a;
	a.push_back(10);
	a.push_back(20);
	a.push_back(40);

	//iterator are similar to pointers.
	auto itra = a.begin();

	for(;itra!=a.end();itra++){
		cout << "Value = " << *itra << endl;
	}
	cout << "Size = " << a.size() << endl;

	a.clear();

	cout << "Size = " << a.size() << endl;

	cout << "_________LIST_________" << endl;

	return 0;
}
