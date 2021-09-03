// Face Detection With OpenCV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core//types_c.h"
#include <iostream>

using namespace std;
using namespace cv;

void detectAndDraw(Mat& img, CascadeClassifier& cascade);

const static Scalar colors[] =
{
	Scalar(255,0,0),
	Scalar(255,128,0),
	Scalar(255,255,0),
	Scalar(0,255,0),
	Scalar(0,128,255),
	Scalar(0,255,255),
	Scalar(0,0,255),
	Scalar(255,0,255)
};

int main()
{
	CascadeClassifier cascade;

	cascade.load("C:\\opencv\\build\\etc\\haarcascades\\haarcascade_frontalface_default.xml");

	string inputName = "Test Image.jpg";
	Mat image = imread(samples::findFileOrKeep(inputName), IMREAD_COLOR);
	if (image.empty())
	{
		cout << "Could not read " << inputName << endl;
		return 1;
	}
	else
	{
		Mat frame1 = image.clone();
		detectAndDraw(frame1, cascade);
	}

	waitKey(0);
	return 0;
}

void detectAndDraw(Mat& img, CascadeClassifier& cascade)
{
	double t = 0;
	vector<Rect> faces;

	Mat gray;

	cvtColor(img, gray, COLOR_BGR2GRAY);

	t = (double)getTickCount();
	cascade.detectMultiScale(gray, faces,
		1.1, 2, CASCADE_SCALE_IMAGE,
		Size(30, 30));

	t = (double)getTickCount() - t;
	printf("detection time = %g ms\n", t * 1000 / getTickFrequency());

	for (size_t i = 0; i < faces.size(); i++)
	{
		Rect r = faces[i];
		rectangle(img, Point(cvRound(r.x), cvRound(r.y)),
			Point(cvRound((r.x + r.width - 1)), cvRound((r.y + r.height - 1))),
			colors[i % 8], 1, 8, 0);
	}

	imshow("result", img);
}