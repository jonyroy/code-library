#include<bits/stdc++.h>
using namespace std;
//add big number
string add(string a,string b)//a and b recive reverse number
{
    char *r;
   int la=a.size(),lb=b.size(),l,i,s1,s2,t=0;
    l=max(la,lb);
    r=new char[l+5];
    for(i=0;i<l;i++)
    {
        if(i<la)
        s1=a[i]-48;
        else
        s1=0;
        if(i<lb)
        s2=b[i]-48;
        else
        s2=0;
        r[i]=(s1+s2+t)%10+48;
        t=(s1+s2+t)/10;
    }
    if(t>0)
    {
        r[i]=t+48;
        i++;
    }
    r[i]='\0';
    return r;//return reverse number
}
//convert int to string
string convertInt(int number)
{
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}
int main()
{
    string SS;     // C++ STL string
   string SS2;    // C++ STL string

   SS = "This is a string";
   SS2 = SS;
   cout << SS << endl;
    string a("abcd efg");
   string b("xyz ijk");
   string c;
   cout << a << " " << b << endl;
   cout << "String empty: "    << c.empty()    << endl;  // String empty: 1
    // add two string                                                     // Is string empty? Yes it is empty. (TRUE)
   c = a + b;                                            // concatenation
   cout << c << endl;                                    // abcd efgxyz ijk
   // String length
   cout << "String length: "   << c.length()   << endl;
    //String size
   cout << "String size: "     << c.size()     << endl;  // String size: 15
   //String capacity
   cout << "String capacity: " << c.capacity() << endl;  // String capacity: 15
   // String empty
   cout << "String empty: "    << c.empty()    << endl;  // String empty: 0
                                                         // Is string empty? No it is NOT empty. (FALSE)
   string d = c;
   string f("    Leading and trailing blanks      ");
   //str1.append(str2);
   //string str2 add last to string str1
   cout << "String f:" << f.append("ZZZ") << endl;       // String f:    Leading and trailing blanks      ZZZ
   string g("abc abc abd abc");
   //str1.replace(i,n,str2,m);
   //here number of n charecter of string str1 are replaced by
   //number of m charecter of string str2. and strat replace from
   // i th index from string str1.
   cout << g.replace(0,3,"xyz",3) << endl;               // xyz abc abd xyzbc
   cout << g.replace(4,3,"xyz",3) << endl;               // xyz xyz abd xyzbc
   cout << g.replace(4,3,"ijk",1) << endl;               // xyz i abd xyzbc
   //str1.find(str2,i);
   //find string str2 in string str1 from index i th
   // return first maching index number
   // if not found then return a big number.
   cout << "Find: " << g.find("abd",1) << endl;          // Find: 6
   cout << g.find("qrs",1) << endl;

   string h("abc abc abd abc");
   cout << "Find_first_of \"abc\",0: " << h.find_first_of("abc",0) << endl; // Find_first_of "abc",0: 0
   cout << "Find_last_of \"abc\",0: " << h.find_last_of("abc",0) << endl;   // Find_last_of "abc",0: 0
   cout << "Find_first_not_of \"abc\",0: " << h.find_first_not_of("abc",0) << endl;  // Find_first_not_of "abc",0: 3
   cout << "Find_first_not_of \" \": " << h.find_first_not_of(" ") << endl;  // Find_first_not_of " ": 0
   //str1.substr(i,n);
   //return sub string(n charecter from i th index)
   // from string str1
   cout << "Substr 5,9: " << h.substr(5,9) << endl;       // Substr 5,9: bc abd ab
   cout << "Compare 0,3,\"abc\": " << h.compare(0,3,"abc") << endl;  // Compare 0,3,"abc": 0
   cout << "Compare 0,3,\"abd\": " << h.compare(0,3,"abd") << endl;  // Compare 0,3,"abd": -1
   cout << h.assign("xyz",0,3) << endl;                   // xyz
   cout << "First character: " << h[0] << endl; // Strings start with 0 // First character: x


    return 0;
}


