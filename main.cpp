//Autor: CarlosRFS
//Email: carlosrfs99@gmail.com

//Standard Headers
#include <iostream>
#include <stdexcept>

//X11 Headers
#include <X11/Xlib.h>

int main(int argc, char *argv[]) {
	try{
		//Just Open Screen 0 in Display 0 and after that close
		Display *display = XOpenDisplay(":0.0");
		std::cout << "OK seens that my pc still work so its fine!\n";
		XCloseDisplay(display);

	}
	catch(std::exception e) {
		std::cout << "==>Erro:" << e.what();
	}
	return 0;
}
