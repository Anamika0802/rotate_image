// opencv_rotate_image.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include<windows.h>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
    int angle,c;
    string path;
    cout << "enter the angle ";
    cin >> angle;
    cout << "enter the path ";
    cin.ignore();
    getline(cin, path);
    cout << "Enter 1 for anti-clockwise rotation and 2 for clockwise rotation ";
    cin >> c;
    if (c == 2)angle = -angle;
    Mat img = imread(path, 1);
    if (img.empty()) {
        MessageBox(NULL, L"Wrong Path!", L"Error!", MB_OK);
        return 0;
    }
    int imgh = img.rows / 2;
    int imgw = img.cols / 2;
    namedWindow("rotated image");
        Mat matr = getRotationMatrix2D(Point(imgw, imgh), angle, 0.5);
        Mat imgr;
        warpAffine(img, imgr, matr, img.size());
        imshow("rotated image", imgr);
        if(waitKey(0))

    destroyAllWindows();
    imwrite("rotated_image.png",imgr);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
