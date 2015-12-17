#include <fstream>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
   string data;
   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.txt");
   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   getline(cin,data);
   // write inputted data into the file.
   outfile << data << endl;
   cout << "Enter your age: ";
   cin >> data;
   cin.ignore();
   // again write inputted data into the file.
   outfile << data << endl;
   // close the opened file.
   outfile.close();
   // open a file in read mode.
   ifstream infile;
   infile.open("afile.txt");
   cout << "Reading from the file" << endl;
   while(getline(infile,data))
   // write the data at the screen.
   cout << data <<endl;
   // again read the data from the file and display it.
   //infile >> data;
   //cout << data << endl;
   // close the opened file.
   infile.close();
   return 0;
}
