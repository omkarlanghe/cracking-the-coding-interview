/*
 * There are three types of edits that can be performed on strings: insert a char, remove a char, replace a char.
 * Given two stringsm write a function to check if they are one edit or zero edit away
 */
#include<iostream>
#include<stdbool.h>
using namespace std;

bool oneEditAway(string &, string &);
bool oneEditReplace(string &, string &);
bool oneEditInsert(string &, string &);

int main()
{
	string str1, str2;
	cout<<"Enter first string :"<<endl;
	cin>>str1;
	cout<<"Enter second string :"<<endl;
	cin>>str2;

	bool editStatus = oneEditAway(str1, str2);
	if(editStatus) {
		cout<<"true"<<endl;
	} else {
		cout<<"false"<<endl;
	}
	return 0;
}

bool oneEditAway(string &str1, string &str2) {
	if(str1.size() == str2.size()) {
		return oneEditReplace(str1,str2);
	} else if(str1.size() + 1 == str2.size()) {
		return oneEditInsert(str1,str2);
	} else if(str1.size() - 1 == str2.size()) {
		return oneEditInsert(str1,str2);
	}
}

bool oneEditReplace(string &str1, string &str2) {
	bool foundDifference = false;
	for(int i = 0 ; i < str1.size() ; i++) {
		if(str1[i] != str2[i])
		{
			if(foundDifference) {
				return false;
			}
			foundDifference = true;
		}
	}
	return true;
}

// check if you can insert a character into s1 to make s2
bool oneEditInsert(string &str1, string &str2) {
	int index1 = 0;
	int index2 = 0;
	while(index2 < str2.size() && index1 < str1.size()) {
		if(str1[index1] != str2[index2]) {
			if(index1 != index2) {
				return false;
			}
			index2++;
		} else {
			index1++;
			index2++;
		}
	}
	return true;
}
