#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp>  
#include <opencv2/imgproc.hpp> 
#include <iostream>

int main( int argc , char **argv ){
  std::string path = "./img/teste.jpg";
  cv::Mat img = cv::imread( path );
  cv::imshow( "Minha Imagem", img );
  cv::waitKey(0);
  std::getline( std::cin, path );

  return 0;
}
/*
compilar no terminal:
g++ -I/usr/include/opencv4 -g -o ./exe main.cpp -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -std=c++11

./exe
*/