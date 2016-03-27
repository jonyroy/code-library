/*
  Date:25-12-2015
  Created By Jony Roy
  Be Happy & Enjoy The Moment.
*/
#include<cv.h>
#include<highgui.h>
#include<bits/stdc++.h>
using namespace std;
int gSliderPosition=0;
CvCapture* gCapture=NULL;
void onTrackbarSlide( int pos)
{
    cvSetCaptureProperty(gCapture,CV_CAP_PROP_POS_FRAMES,pos);
}
int main()
{
    cvNamedWindow("MyVideo",CV_WINDOW_AUTOSIZE);
    gCapture=cvCreateFileCapture("video.avi");
    int frames=(int)cvGetCaptureProperty(gCapture,CV_CAP_PROP_FRAME_COUNT);
    if(frames)
    {
        cvCreateTrackbar("Position","MyVideo",&gSliderPosition,frames,onTrackbarSlide);
    }
    IplImage* img;
    while(1)
    {

        img=cvQueryFrame(gCapture);
        if(!img)
            break;
        cvShowImage("MyVideo",img);
        char c=cvWaitKey(33);
        if(c==27)
            break;
        cvCreateTrackbar("Position","MyVideo",&gSliderPosition,frames,onTrackbarSlide);
        gSliderPosition++;
    }
    return 0;
}
