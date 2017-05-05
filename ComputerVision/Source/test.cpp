#include <opencv2/highgui/highgui.hpp>
#include <bits/stdc++.h>
using namespace std;
using namespace cv;
///home/jonyroy/Desktop/MyCodeLibrary/ComputerVision/Picture/
int main(int argc, char const *argv[])
{
	//================================================================||
	//                        Basic Data Structure                    ||
	//================================================================||
	//            Point 2d and 3d
	//Point(x,y) is integer
	//Point2f(x,y) is float
	//Point2d(x,y) is double
	//Point3i(x,y,z) is integer
	//Point3f(x,y,z) is float
	//Point3d(x,y,z) is double
	Point a(2.5, 6.2);
	Point2f b(.3f, 0.f), c(0.f, 0.4f);
	Point pt = (b + c) * 10.f;
	cout << b.x << " " << b.y << endl;
	Point3f x(1.1, 2.2, 3.3);
	x.x = 5.2;
	x.y = 8.0;
	x.z = 4;
	cout << x.x << " " << x.y << " " << x.z << endl;
	//================================================================||
	//Size for Image and Rectangle
	//Declaration
	//   Size2i for Integer
	//   Size for Integer
	//   Size2f for float
	Size s(5, 6);
	cout << s.height << " " << s.width << endl;
	//================================================================||
	Rect roi(100, 100, 500, 500);
	Mat image = imread("1.jpg", CV_LOAD_IMAGE_UNCHANGED);
	//Mat image_roi = image(roi);

	Mat fl;
	flip(image, fl, -1);
	namedWindow("Picture", CV_WINDOW_NORMAL);
	imshow("Picture", fl);
	waitKey(0);

	return 0;
}