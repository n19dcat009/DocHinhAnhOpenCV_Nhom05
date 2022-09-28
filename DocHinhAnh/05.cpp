//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace vô hi?u hóa vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;

int main() {

	//??c hình ?nh
	Mat img1 = imread("C:\\Users\\84395\\Music\\MEmu Music\\DocHinhAnh\\ptit.jpg", 1);
	Mat img2 = imread("C:\\Users\\84395\\Music\\MEmu Music\\DocHinhAnh\\ptit.jpg", -1);
	Mat img3 = imread("C:\\Users\\84395\\Music\\MEmu Music\\DocHinhAnh\\ptit.jpg", 0);
	//Hi?n th? hình ?nh ra c?a s?
	imshow("PTIT image", img1);
	imshow("PTIT1 image", img2);
	imshow("PTIT2 image", img3);
	//ch? t? h?p phím.
	waitKey(0);
	//phá h?y t?t c? các c?a s? ???c t?o ra
	destroyAllWindows();
	return 0;
}
