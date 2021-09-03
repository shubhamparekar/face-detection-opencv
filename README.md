# OpenCV Face Detection With Visual Studio 2017

## Installation
* Download lastest version of OpenCV for Win Pack : https://opencv.org/releases.html
* Extrat to C:\

![Extract](https://raw.githubusercontent.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio-/master/Readme%20Files/OpenCV%20Setup%2001.png)
* Create New Project

![Create New Project](https://raw.githubusercontent.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio-/master/Readme%20Files/OpenCV%20Setup%2002.png)
* Change to X64

![ChangeTox64](https://raw.githubusercontent.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio-/master/Readme%20Files/changeTo%20x64.gif)
* Click Project Properties 

![](https://raw.githubusercontent.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio-/master/Readme%20Files/OpenCV%20Setup%2006.png)
* Set to [C/C++]/[General]/[Additional Include Directories] -> "C:\opencv\build\include"

![](https://raw.githubusercontent.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio-/master/Readme%20Files/OpenCV%20Setup%2003.png)
* Set to [Linker]/[General]/[Additional Library Directories] -> "C:\opencv\build\x64\vc15\lib"

![](https://raw.githubusercontent.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio-/master/Readme%20Files/OpenCV%20Setup%2004.png)
* Set to [Linker]/[Input]/[Additional Dependencies] -> "opencv_world401d.lib"

![](https://raw.githubusercontent.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio-/master/Readme%20Files/OpenCV%20Setup%2005-1.png)

* I took the test image from [Link](https://www.coca-cola.co.uk/about-us/our-people)![]()

## Final
* cascade.detectMultiScale(gray, faces, 1.1, 3, CASCADE_SCALE_IMAGE, Size(30, 30));
![Result 1](https://github.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio-/blob/master/Readme%20Files/OpenCV%20Result.png)

* cascade.detectMultiScale(gray, faces, 1.1, 3, CASCADE_SCALE_IMAGE, Size(10, 10));
![Result 2](https://github.com/mertguner/OpenCV-Face-Detection-With-Visual-Studio/blob/master/Readme%20Files/OpenCV%20Result%202.png)
