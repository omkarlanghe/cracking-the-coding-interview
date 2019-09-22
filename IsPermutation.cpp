/*
 * Given two strings, write a method to decide if one is a permutation of the other
 */
#include<iostream>

using namespace std;

/*string removeDuplicates(string &);*/
string sort(string &);
int isPermutation(string &, string &, int);

int main()
{
	string str1, str2;

	cout<<"enter first string"<<endl;
	cin>>str1;
	cout<<"enter second string"<<endl;
	cin>>str2;
	
	string retstr1 = sort(str1);
	string retstr2 = sort(str2);

	if(isPermutation(retstr1, retstr2, 0) == 1) {
		cout<<"Yes its a permutation"<<endl;
	} else {
		cout<<"Not its not a permutation"<<endl;
	}

	return 0;
}

int isPermutation(string &str1, string &str2, int flag)
{
	flag = (str1 == str2) ? 1 : 0;
	
	/*if(str1 == str2 && str1.size() == str2.size()) {
		flag = 1;
	}*/
	return flag;
}

/*
string removeDuplicates(string &str)
{
	int index = 0;
	string temp_str = sort(str);
	for(int i = 0 ; i < temp_str.size() ; i++) {
		if(temp_str[i] != temp_str[i+1])
		{
			temp_str[index] = temp_str[i];
			index++;
		}
	}
	return temp_str;
} */

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
