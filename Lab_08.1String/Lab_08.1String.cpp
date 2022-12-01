#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('.', pos)) != -1)
	{
		pos++;
		k++;
		if (k == 3)
			return pos;
			
	}
	return 0;
}
string Change(string& s)
{
	int i = 4;
	int len = s.length();
	size_t pos = 3;

	while ((pos = s.find(s[pos], pos)) < (len / 4) * 4 - 1)
	{
		s.replace(pos, 1, ".");
		pos += 4;
	}
			s.replace(pos, 1, ".");
			return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Index of 3rd dot: " << Count(str) << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
		return 0;
}