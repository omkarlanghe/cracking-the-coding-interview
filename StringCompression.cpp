#include<iostream>
#include<string>
using namespace std;
void StringCompression(string&);
int main()
{
	string str;
	cout<<"Enter the string"<<endl;
	cin>>str;
	StringCompression(str);
	//cout<<retVal;
	return(0);
}

void StringCompression(string &str)
{
	int n = str.size();
	for(int i = 0 ; i < n ; i++) {
		int countConsecutive = 1;
		while(i < n - 1 && str[i] == str[i+1]) {
			countConsecutive++;
			i++;
		}
		cout<<str[i]<<countConsecutive;
	}
	//return compressedStr.size() < str.size() ? compressedStr : str;
}
