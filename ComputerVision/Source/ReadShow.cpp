#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main(int argv, const char ** argc)
{

    Mat img = imread("/home/jonyroy/ComputerVision/Picture/pic.jpg", CV_LOAD_IMAGE_UNCHANGED);
    namedWindow("Trackbar", CV_WINDOW_AUTOSIZE);
    int iSlideValue1 = 50;
    createTrackbar("Brightness", "Trackbar", &iSlideValue1, 100);
    int iSlideValue2 = 50;
    createTrackbar("Contrast", "Trackbar", &iSlideValue2, 100);
    while (true)
    {
        Mat dst;
        int iBrightness = iSlideValue1 - 50;
        double dContrast = iSlideValue2 / 50.0;
        img.convertTo(dst, -1, dContrast, iBrightness);
        imshow("Trackbar", dst);
        char c = waitKey(33);
        if (c == 27)
            break;
    }
    return 0;
}
