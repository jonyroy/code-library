#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
struct node
{
    char name[100];
    int age;
    int salary;
};
bool compare(node a,node b)
{
    if(a.name==b.name)
    {
        if(a.age==b.age)
        {
            return a.salary<b.salary;
        }
        else
        return a.age<b.age;
    }
    else
    //return strcmp(a.name,b.name)<strcmp(b.name,a.name);
    return strlen(a.name)<strlen(b.name);
}
int main()
{
    vector<node>v;
    int n,i;
    scanf("%d",&n);
    node m;
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",m.name,&m.age,&m.salary);
        v.push_back(m);
    }

    sort(v.begin(),v.end(),compare);
    cout<<"\n";
    for(i=0;i<n;i++)
    cout<<v[i].name <<" "<<v[i].age<<" "<<v[i].salary<<endl;
    return 0;
}

