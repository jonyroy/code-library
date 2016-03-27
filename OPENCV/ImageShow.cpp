/*
  Date:25-12-2015
  Created By Jony Roy
  Be Happy & Enjoy The Moment.
*/
#include <iostream>
#include <highgui.h>
using namespace std;
int main()
{
    IplImage* MyImage=cvLoadImage("img.jpg");
//    cvNamedWindow("IamTufan",0);
    cvNamedWindow("IamTufan",CV_WINDOW_AUTOSIZE);
    cvShowImage("IamTufan",MyImage);
    cvWaitKey(0);
    cvReleaseImage(&MyImage);
    cvDestroyWindow("MyImage");
    return 0;
}

