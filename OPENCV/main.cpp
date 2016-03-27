#include <iostream>
#include <highgui.h>
using namespace std;
int main()
{
//    IplImage* myImage=cvLoadImage("img.jpg");
//    cvNamedWindow("My Image",CV_WINDOW_AUTOSIZE);
//    cvShowImage("My Image",myImage);
//    cvWaitKey(5000);
    IplImage* MyImage=cvLoadImage("img.jpg");
    cvNamedWindow("IamTufan",0);
    cvShowImage("IamTufan",MyImage);
    cvShowImage("IamTufa",MyImage);
    cvWaitKey(0);
    cvReleaseImage(&MyImage);
    cvDestroyWindow("MyImage");
    return 0;
}
