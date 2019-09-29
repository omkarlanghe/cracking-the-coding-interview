#include<iostream>
#include<set>
#include<utility>
#include<vector>

using namespace std;
char firstRecurringChar(string &);
int main()
{
	string str;
	cout<<"Enter string"<<endl;
	cin>>str;

	char retChar = firstRecurringChar(str);
	cout<<"first recurring character is :"<<retChar<<endl;
	return 0;
}

char firstRecurringChar(string &str) {
	set<char> hashset;

	for(int i = 0 ; i < str.size() ; i++) {
		char ch = str[i];
		if(hashset.find(ch) != hashset.end()) {
			return ch;
		} else {
			hashset.insert(ch);
		}
	}
	return '0';
}
