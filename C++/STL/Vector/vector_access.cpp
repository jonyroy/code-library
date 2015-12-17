#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <utility>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
using namespace std;

#define pb  push_back
#define pob pop_back
#define mp  make_pair
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define For(i,k,r)  for(int i = k; i <= r; i++)
#define Fill(a,b)   memset(a,b,sizeof(a))
#define OR ||
#define AND &&
#define P printf
#define S scanf
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;

const int N = 200000;
int n, m, k;
long long a[N];
int l[N], r[N], d[N];
long long open[N], close[N];
long long add[N], sub[N];

struct Soldier
{
    char name[50];
	int health;
	int ID;
};

int main()
{
	vector<Soldier> army;

	for( int i = 0; i < 4; i++ )
	{
		Soldier temp;
		//temp.health = 100;
		cin>>temp.name>>temp.health;
		temp.ID = i;
		army.push_back(temp);
	}
	// Accessing elements through the [] operator
	for( unsigned int i = 0; i < army.size(); i++ )
	{
		cout << "Name = "<<army[i].name<<"  "<<"Soldier ID = " << army[i].ID<<"  "<< "health = " << army[i].health << endl;
	}
    cout<<endl;
	// Using an iterator to access the elements inside the vector
	vector<Soldier>::iterator iter;
	for( iter = army.begin(); iter != army.end(); iter++ )
	{
		cout <<"Name = "<<iter->name<<"  "<< "Soldier ID = " << iter->ID <<"  "<< "health = " << iter->health <<endl;
	}
	return 0;
}
