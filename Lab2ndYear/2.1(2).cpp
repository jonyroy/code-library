/*
2.1(2):
problem:
Create a class called stopwatch that emulates a stopwatch that keeps track of elapsed time.
Use a constructor to initially set the elapsed time to 0.
Provide two member functions called start() and stop() that turn on and off the timer, respectively.
Include a member function called show() that displays the elapsed time.
Also, have the destructor function automatically display elapsed time when a stopwatch object is destroyed.
(To simplify, report the time in seconds.)
*/
 // Stopwatch emulator
 #include<iostream>
 #include<ctime>
 using namespace std;
 class stopwatch
 {
    double begin,end;
public:
    stopwatch();
    ~stopwatch();
    void start();
    void stop();
    void show();
 };
 stopwatch :: stopwatch()
 {
     begin = end =0.0;
 }
 stopwatch :: ~stopwatch()
 {
     cout<<"Stopwatch object being destroyed...";
     show();
 }
 void stopwatch :: start()
 {
     begin = (double) clock() / CLOCKS_PER_SEC;
 }
void stopwatch :: stop()
{
    end = (double) clock() / CLOCKS_PER_SEC;
}
void stopwatch :: show()
{
    cout <<"Elapsed time="<<end - begin;
    cout<<"\n";
}
int main()
{
    stopwatch watch;
    long i;
    watch.start();
    for(i=0;i<=1000000000;i++)
        ;
    watch.stop();
    watch.show();
    cout<<"kajdsfkajdshf\n";
    return 0;
}
