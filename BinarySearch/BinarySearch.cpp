/*
Author: backjoob
*/

#include <vector>
#include <iostream>

using namespace std;

vector<int> testData100{1, 3, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 9, 11, 13, 13, 13, 14, 14, 16, 16, 17, 17, 19, 20, 20, 22, 23, 24, 26, 26, 29, 30, 32, 33, 33, 36, 37, 38, 39, 39, 41, 45, 46, 46, 47, 47, 48, 51, 56, 57, 57, 58, 59, 59, 60, 61, 61, 61, 64, 66, 67, 68, 69, 69, 70, 70, 70, 72, 72, 73, 73, 75, 75, 76, 82, 83, 84, 84, 86, 86, 87, 87, 89, 90, 90, 90, 91, 92, 93, 95, 95, 95, 95, 95, 97, 98, 98, 99, 100};
vector<int> testData101{1, 3, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 9, 11, 13, 13, 13, 14, 14, 16, 16, 17, 17, 19, 20, 20, 22, 23, 24, 26, 26, 29, 30, 32, 33, 33, 36, 37, 38, 39, 39, 41, 45, 46, 46, 47, 47, 48, 51, 56, 57, 57, 58, 59, 59, 60, 61, 61, 61, 64, 66, 67, 68, 69, 69, 70, 70, 70, 72, 72, 73, 73, 75, 75, 76, 82, 83, 84, 84, 86, 86, 87, 87, 89, 90, 90, 90, 91, 92, 93, 95, 95, 95, 95, 95, 97, 98, 98, 99, 100, 100};


int insertIndex(vector<int> &vec, int val){
	int mindex = 0;
	int maxdex = vec.size()-1;
	
	while(mindex < maxdex){
		int testdex = (mindex + maxdex)/2;
		if(vec[testdex] > val){
			maxdex = testdex;
		} else {
			mindex = testdex+1;
		}
		//cout << '(' << mindex << ',' << maxdex << ')' << endl;
	}
	
	return mindex;
}

int main(void){
	
	//cout << insertIndex(testData100, 5);
	
	vector<int> &vec = testData100;
	
	for(int i = -2; i <= 103; i++){
		int foundIndex = insertIndex(vec, i);
		cout << i << ": " << foundIndex << ' ';
		if(foundIndex == 0 || vec[foundIndex-1] <= i){
			cout << "good";
		} else { 
			cout << "bad";
		}
		cout << ' ';
		if(foundIndex == vec.size()-1 || vec[foundIndex] >= i){
			cout << "good";
		} else {
			cout << "bad";
		}
		cout << endl;
	}
	
	return 0;
}
