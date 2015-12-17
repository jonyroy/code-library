#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string jony;
   int power[10]={1,26,676,17576,456976,11881376};
   int ppp[10]={0,26,702,18278,475254,12356630};
   for(int i=1;i<=n;i++)
   {
       cin>>jony;
       if(jony[0]=='R')
       {
           int cn=0,j=1;
           string mn,nm;
           while(isdigit(jony[j])&&j<jony.size())
           {
               mn+=jony[j];
               j++;
           }
           j++;
           while(isdigit(jony[j])&&j<jony.size())
           {
               nm+=jony[j];
               j++;
           }
           char vv[100];
           int g=atoi(nm.c_str());
           int rr=0;
           while(g)
           {
                int q=g%26;
                g/=26;
                if(q==0)
                g--;
                if(q==0)
                q=26;
                vv[++rr]=(char)(64+q);

           }
           for(int k=rr;k>=1;k--)
            cout<<vv[k];
           cout<<mn<<endl;
       }
       else
       {
           string mn,mmm;
           int j=0;
           while(isalpha(jony[j])&&j<jony.size())
            {
            mn+=jony[j];
            j++;
            }
            while(isdigit(jony[j])&&j<jony.size())
            {
            mmm+=jony[j];
            j++;
            }
            int cal=0,len;
            len=mn.length();
            if(len-1>=1)
            cal+=ppp[len-1];
            int f;
            for( f=0;f<len-1;f++)
            {
                if(len-(f+1)>=1)
                cal+=(((mn[f]-64)-1)*(power[len-(f+1)]));
            }
            cal+=(mn[f]-64);
            cout<<"R"<<mmm<<"C"<<cal<<endl;
       }
   }
   return 0;
}
