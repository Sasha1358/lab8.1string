#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('a', pos)) != -1)
	{
		pos++;
		if (s[pos] == 'a')
			k++;
	}
	pos = 0;
	while ((pos = s.find('b', pos)) != -1)
	{
		pos++;
		if (s[pos] == 'b')
			k++;
	}
	pos = 0;
	while ((pos = s.find('c', pos)) != -1)
	{
		pos++;
		if (s[pos] == 'c')
			k++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('a', pos)) != -1)
	{
		if (s[pos] == 'a')
			s.replace(pos, 2, "***");
		else
			pos++;
	}
	pos = 0;
	while ((pos = s.find('b', pos)) != -1)
	{
		if (s[pos] == 'b')
			s.replace(pos, 2, "***");
		else
			pos++;
	}
	pos = 0;
	while ((pos = s.find('c', pos)) != -1)
	
		if (s[pos] == 'c')
			s.replace(pos, 2, "***");
		else
			pos++;
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
		getline(cin, str);
	cout << "String contained " << Count(str) << " groups of 'aa', 'bb', 'cc'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}