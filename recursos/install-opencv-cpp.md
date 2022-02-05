# Instalação No Linux

Para instalar o OpenCV basta utilizar o gerenciador de pacotes da sua distribuição Linux, exemplos:

+ No Gentoo/Funtoo e similares

```sh
# Para usar os exemplos
sudo vim /etc/portage/package.use/zz-autounmask
#>=media-libs/opencv-4.5.1 ffmpeg gtk3 webp debug examples contrib contribdnn gflags
sudo emerge media-libs/opencv
```

> Você ainda pode utilizar o `app-portage/gentoolkit` e utilizar o comando: `equery uses media-libs/opencv` para compilar bibliotecas como: `webp`, `ffmpeg` e outras juntas com o OpenCV.

+ No Ubuntu/Debian/Mint e derivados
Dependências:

```sh
sudo apt update
sudo apt install -y g++ make cmake wget unzip libopencv-dev libgtk-3-dev libpng++-dev libpng16-16 libpng-dev
```

Instalar:

```sh
wget -O opencv.zip https://github.com/opencv/opencv/archive/master.zip
unzip opencv.zip
mv opencv-master opencv
mkdir -p build && cd build
cmake ../opencv
make
sudo make install
```

E para qualquer outra distro ou sistema operacional você pode clonar o repositório <https://github.com/opencv/opencv> e compilar, mas antes precisará instalar as dependências em tempo de compilação e em tempo de execução .

### Testando

Para esse primeiro exemplo vamos somente abrir uma imagem para ver se está funcionando e também servirá para sabermos como compilar.

```cpp
#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp>  
#include <opencv2/imgproc.hpp> 
#include <iostream>

int main( int argc , char **argv ){
  std::string path = "minha-foto.png";
  cv::Mat img = cv::imread( path );
  cv::imshow( "Minha Imagem", img );
  cv::waitKey(0);
  std::getline( std::cin, path );

  return 0;
}
```

Para compilar usaremos o seguinte comando:

```sh
g++ -I/usr/include/opencv4 -g -o binary  main.cpp -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -std=c++11
```

---
