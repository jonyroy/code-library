#include<highgui.h>
#include<bits/stdc++.h>
#include<cv.h>
using namespace std;
IplImage* doPyrDown(IplImage* in,int filter = IPL_GAUSSIAN_5x5)
{
// Best to make sure input image is divisible by two.
    assert( in->width%2 == 0 && in->height%2 == 0 );
    IplImage* out = cvCreateImage(cvSize( in->width/2, in->height/2 ),in->depth,in->nChannels);
    cvPyrDown( in, out );
    return( out );
};
IplImage* doCanny(IplImage* in,double lowThresh,double highThresh,double aperture)
{
    if(in->nChannels != 1)
    return(0); //Canny only handles gray scale images
    IplImage* out = cvCreateImage(cvSize( cvGetSize( in )),IPL_DEPTH_8U,1);
    cvCanny( in, out, lowThresh, highThresh, aperture );
    return( out );
};
int main()
{
    IplImage* in=cvLoadImage("pic.jpg");
    cvNamedWindow("JonyRoy",CV_WINDOW_AUTOSIZE);
    IplImage* img1 = doPyrDown( in, IPL_GAUSSIAN_5x5 );
    IplImage* img2 = doPyrDown( img1, IPL_GAUSSIAN_5x5 );
    IplImage* img3 = doCanny( img2, 10, 100, 3 );
// do whatever with ‘img3’
    cvShowImage("JonyRoy",img3);
    cvWaitKey();
    cvReleaseImage( &img1 );
    cvReleaseImage( &img2 );
    cvReleaseImage( &img3 );
    return 0;
}
