/*
  Date:25-12-2015
  Created By Jony Roy
  Be Happy & Enjoy The Moment.
*/
#include<cv.h>
#include<highgui.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cvNamedWindow("Example",CV_WINDOW_AUTOSIZE);
    IplImage* image =cvLoadImage("img.jpg");
    cvShowImage("ExampleIn",image);
    IplImage* out=cvCreateImage(cvGetSize(image),IPL_DEPTH_8U,3);
    cvSmooth(image,out,CV_GAUSSIAN,3,3);
    cvShowImage("Example",out);
    cvWaitKey();
    return 0;
}
