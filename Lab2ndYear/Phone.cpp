#include<iostream>
#include<string>
using namespace std;
class phone
{
    string s;
    char a[20][4]={{' '},{'.',',','?','!'},{'a','b','c'},{'d','e','f'},{'g','h','i'},
    {'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'},{0},{0},{0},{0},{0},{0},{0},{0}};
    int n[7];
public:
    void getdata(string a)
    {
        s=a;
    }
    void solve()
    {
        int p=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<48||s[i]>57)
            {
            a[10+p][0]=s[i];
            s[i]=10+p+48;
            p++;
            }
        }
        for(int a1=0;a1<4;a1++)
        {
            string g;
            g.empty();
            g=a[s[0]-48][a1];
            if(g[0]<97||g[0]>122)
            break;
            for(int a2=0;a2<4;a2++)
            {
               g+=a[s[1]-48][a2];
               if(g[1]<97||g[1]>122)
                break;
               for(int a3=0;a3<4;a3++)
               {
                   g+=a[s[2]-48][a3];
                   if(g[2]<97||g[2]>122)
                    break;
                   for(int a4=0;a4<4;a4++)
                   {
                       g+=a[s[3]-48][a4];
                       if(g[3]<97||g[3]>122)
                        break;
                       for(int a5=0;a5<4;a5++)
                       {
                           g+=a[s[4]-48][a5];
                           if(g[4]<97||g[4]>122)
                            break;
                           for(int a6=0;a6<4;a6++)
                           {
                               g+=a[s[5]-48][a6];
                               if(g[5]<97||g[5]>122)
                                break;
                               for(int a7=0;a7<4;a7++)
                               {
                                   g+=a[s[6]-48][a7];
                                   if(g[6]<97||g[6]>122)
                                    break;
                                   if(g.size()==7)
                                   {
                                       cout<<g<<endl;
                                       g.erase(6);
                                   }
                               }
                               g.erase(5);
                           }
                           g.erase(4);
                       }
                       g.erase(3);
                   }
                   g.erase(2);
               }
               g.erase(1);
           }
           g.erase(0);
       }
    }
};
int main()
{
    string s;
    phone p;
    while(cin>>s)
    {
        if(s=="0000000")
        break;
        p.getdata(s);
        p.solve();
        cout<<endl;
    }
    return 0;
}
