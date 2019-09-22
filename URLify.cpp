/*
 * write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient
 * at the end to hold the additional characters, and that you are given the "true" length of the string.
 * Input: "My John Smith   ", 13
 * Output: "Mr%20John%20Smith" 
 * */

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string modifyString(string&, int);

int main()
{
	int str_size;
	string input;
	cout<<"enter the string"<<endl;
	getline(cin, input);
		
	string modified_str = modifyString(input, input.size());
	cout<<modified_str<<endl;
	return 0;
}

string modifyString(string &str, int size)
{
	for(int i = 0 ; i < size ; i++) {
		if(str[i] == ' ') {
			str[i] = '#';
		}
	}
	return str;
}

