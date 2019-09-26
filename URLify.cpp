/*
 * write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient
 * at the end to hold the additional characters, and that you are given the "true" length of the string.
 * Input: "My John Smith   ", 13
 * Output: "Mr%20John%20Smith" 
 * */

#include<iostream>
#include<vector>

using namespace std;

vector<char> modifyString(string&, int);

int main()
{
	int str_size, length, i = 0;
	string input;
	cout<<"enter the string"<<endl;
	getline(cin, input);
	
	cin>>length;
	vector<char> modified_str = modifyString(input, length);
	for(auto iter = modified_str.begin() ; iter != modified_str.end() ; ++iter) {
		cout<<*iter;
	}
	cout<<endl;
	return 0;
}

vector<char> modifyString(string &str, int size)
{
	vector<char> svec;
	for(int i = 0 ; i < size ; i++) {
		if(str[i] == ' ') {
			svec.push_back('%');
			svec.push_back('2');
			svec.push_back('0');
		} else {
			svec.push_back(str[i]);
		}
	}
	return(svec);
}

