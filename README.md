# rotate_image
This project takes a image file path, rotation angle and the input for the clockwise or anti-clockwise rotation
# Image Rotation in c++
The project is related to the OpenCV functions to rotate an image. We read the user input for rotation angle, the image path and for the for the rotation to be clockwise or anti-clockwise then we check for the image is read (we read the image using the imread() function) or the file path is wrong if file is read then with the help of getRotationMatrix2D() function we rotate the image matrix then with warpAffine() function transforms the source image using the specified rotated matrix. Then we show the rotated image using the imshow() function and then save that rotated image using the imwrite() function.

# Pre-defined Functions
imread() : To read the source image or any image.
imwrite() : To write or to save an image.
getRotationMatrix2D() : To rotate the image matrix.
warpAffine() : To transforms the source image using the specified matrix.
imshow() : To show an image.

# Requirements
You should have the version OpenCV version 2.4.3 or above in your machine as in this case I have used version 4.5.0.
You should have MinGw installed in your machine.
You should have a CMake build system.

# Technologies:
You should have Visual Studio or VS Code pre-installed in your machine to write down the code and to debug the code for your project.

# Build and Run Instructions:
In order to compile this program firstly you should go in the same directory you have this file (opencv_image_rotation.cpp) using the cd command.
Then type these commands step by step:
g++ -I"C:\opencv\build\include" -L"C:\opencv\build\x64\mingw\lib" opencv_rotate_image.cpp -lopencv_core243 -lopencv_highgui243 -o out
out
this will work for OpenCV 2.4.3 for other and above version use cmake to build and compile.

