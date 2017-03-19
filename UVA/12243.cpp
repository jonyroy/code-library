/*
* Author: Jony Roy
* Date: 10-07-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	char st[1005];
	while(1)
	{
		bool flag=true;
		gets(st);
		if(st[0]=='*')
			return 0;
		for(int i=1;i<strlen(st);i++)
		{
			if(st[i]==32&&toupper(st[0])!=toupper(st[i+1]))
			{
              flag=false;
			}
		}
		if(flag)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
