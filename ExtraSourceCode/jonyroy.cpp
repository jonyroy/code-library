 #include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstdlib>
#include<cstring>
using namespace std;
class complexnumber
{
    char a[100];
public:
    void setvalue();
    int  value1();
    int value2();

};
void complexnumber::setvalue()
{
    cin>>a;
}
int complexnumber ::value1()
{
      int n=strlen(a),i;
      char b[100];
      if(a[0]=='-')
        {
        b[0]='-';
        i=1;
        }
        else
            i=0;
      while((a[i]!='+'||a[i]!='-')&&i<n)
      {
           b[i]=a[i];
           i++;
      }
      b[i]='\0';
return atoi(b);
}
int complexnumber::value2()
{
    char b[100],c[100];
    int i,n;
    n=strlen(a);
    n-=2;
    int j=0;
    for(i=n;i>=0;i--)
    {
        if(a[i]=='+'||a[i]=='-')
            break;
        else
        b[j++]=a[i];
    }
   b[j]=a[i];
    int k;
    for(k=0;k<=j;k++)
        c[k]=b[j-k];
        c[k]='\0';
        return atoi(c);
}
int main()
{
  complexnumber x,y;
  x.setvalue();
  int va1=x.value1();
  int va2=x.value2();
  y.setvalue();
  int va3=y.value1();
  int va4=y.value2();
  va1=va1+va3;
  va2=va2+va4;
  cout<<"------------\n";
  if(va2>0)
  cout<<va1<<"+"<<va2<<"i"<<endl;
  else
    cout<<va1<<va2<<"i"<<endl;
  //x.setvalue();
  return 0;
}
