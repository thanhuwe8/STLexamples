//  main.cpp
//  STLtestcode
//
//  Created by Minh Thành Nguyễn on 3/20/19.
//  Copyright © 2019 Minh Thành Nguyễn. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int arr[] = {100, 20, 300, 45, 55};
	int *begin = &arr[0];
	int *end = &arr[0] + (sizeof(arr)/sizeof(int));

	// sort using pointer
	sort(begin, end);

	// loop using pointer
	for(;begin!=end;begin++){
		cout << "Value = " << *begin << endl;
	}
}
