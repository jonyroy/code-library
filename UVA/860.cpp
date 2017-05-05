/*
UVA: 860
Problem name: Entropy Text Analyzer
Author: Jony Roy
Email: jonyroyice@gmail.com
Date: 23-03-2017
*/

#include <bits/stdc++.h>
using namespace std;

string convertLowerCase(string word)
{
	for (int i = 0; i < word.size(); ++i)
	{
		if (isalpha(word[i]) && isupper(word[i]))
		{
			word[i] += 32;
		}
	}
	return word;
}

bool delimiterCheck(char word)
{

	string ch = ",.;:!?\"()";
	for (int j = 0; j <  9; j++)
	{
		if (word == ch[j])
		{
			return true;
		}
	}
	return false;
}
int main(int argc, char const *argv[])
{
	map<string, int> mp;
	int counter = 0;
	while (1)
	{
		string st;
		getline(cin, st);
		if (st == "****END_OF_INPUT****")
		{
			return 0;
		}
		if (st == "****END_OF_TEXT****")
		{
			double ans = 0.0;
			map<string, int>:: iterator it;
			for (it = mp.begin(); it != mp.end(); it++)
			{
				ans += ((log10((double)counter) - log10((double)it->second)) * (double)it->second);
			}
			mp.clear();
			ans = ans / (double)counter;
			double rans = (ans / (log10((double)counter))) * 100.0;
			printf("%d %.1lf %d\n", counter, ans, (int)round(rans) );
			counter = 0;
			continue;
		}
		istringstream ss(st);
		string word;
		while (ss >> word)
		{
			string lw = convertLowerCase(word);

			int pos = 0;
			for (int i = 0; i < lw.size(); ++i)
			{
				if (delimiterCheck(lw[i]))
				{
					int l = i - pos;
					if (l > 0)
					{
						string sub = lw.substr(pos, l);
						mp[sub]++;
						counter++;
					}
					pos = i + 1;
				}
				else if (i == (lw.size() - 1))
				{
					int l = i - pos + 1;
					if (l > 0)
					{
						string sub = lw.substr(pos, l);
						pos = i + 1;
						mp[sub]++;
						counter++;
					}
				}
			}
		}
	}
	return 0;
}