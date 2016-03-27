/*
  Date:25-12-2015
  Created By Jony Roy
  Be Happy & Enjoy The Moment.
*/
#include<highgui.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cvNamedWindow("Video",CV_WINDOW_AUTOSIZE);
    CvCapture* cnt=cvCreateFileCapture("video1.mp4");
    IplImage* img;
    while(1)
    {
        img=cvQueryFrame(cnt);
        if(!img)
            break;
        cvShowImage("Video",img);
        char c=cvWaitKey(33);
        if(c==27)
            break;
    }
    return 0;
}
