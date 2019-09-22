/*
 * Implement an algorithm to determine if a string has all unique characters. what if you cannot use additional datastructures
 */

#include<iostream>

using namespace std;
int IsUnique(string &);
string sort(string &);
int main()
{
	string str;
	cout<<"enter string"<<endl;
	cin>>str;
	int flag = IsUnique(str);
	if(flag == 1) {
		cout<<"all characters are unique"<<endl;
	} else {
		cout<<"duplicate characters found"<<endl;
	}
	return 0;
}

int IsUnique(string &input)
{
	string temp = sort(input);
	string sortedStr = sort(input);
	int flag = 0;
	int index = 0;

	//remove duplicates
	for(int i = 0 ; i < sortedStr.size() ; i++) {
		if(sortedStr[i] != sortedStr[i + 1]) {
			sortedStr[index] = sortedStr[i];
			index++;
		}
	}


	if(temp == sortedStr) {
		flag = 1;
	}
	return flag;
}

string sort(string &str)
{
	char temp;
	for(int i = 0 ; i < str.size() ; i++) {
		for(int j = i + 1 ; j < str.size() ; j++) {
			if(str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	return str;
}

