#include <iostream>
#include <bits/stdc++.h>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
using namespace std;
using namespace cv;


string NumberToString (int Number )
{
    ostringstream ss;
    ss << Number;
    return ss.str();
}
int main (int argc, char **argv)
{

    string path = "/home/jonyroy/Desktop/MyCodeLibrary/ComputerVision/Picture/tmp/";
    string w = "/home/jonyroy/Desktop/MyCodeLibrary/ComputerVision/Picture/tmp_bin/";
    string p[] = {"10-1", "10-2", "10-3", "100-1", "1000-1", "1000-2", "20-1", "20-2", "20-3", "500-1", "500-2", "500-3", "500-4"};
    for (int i = 0; i <= 12; i++)
    {
        string s = path + p[i] + ".jpg";
        Mat imageMat = cv::imread( s, CV_LOAD_IMAGE_UNCHANGED);

        //Grayscale matrix
        Mat grayscaleMat (imageMat.size(), CV_8U);

        //Convert BGR to Gray
        cvtColor( imageMat, grayscaleMat, CV_BGR2GRAY );

        //Binary image
        Mat binaryMat(grayscaleMat.size(), grayscaleMat.type());

        //Apply thresholding
        threshold(grayscaleMat, binaryMat, 100, 255, cv::THRESH_BINARY);
        string write = w + p[i] + ".jpg";
        imwrite(write, binaryMat);
    }
    //Show the results
    //namedWindow("Output", cv::WINDOW_NORMAL);
    //imshow("Output", binaryMat);

    //waitKey(0);

    return 0;
}