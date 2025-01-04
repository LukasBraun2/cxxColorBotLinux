   #include <iostream>
   #include <X11/Xlib.h>
   #include <X11/Xutil.h>

   int main() {
       Display *display = XOpenDisplay(nullptr);
       if (!display) {
           std::cerr << "Failed to open X display" << std::endl;
           return 1;
       }

       Window root = DefaultRootWindow(display);
       int screen = DefaultScreen(display);
       int width = DisplayWidth(display, screen);
       int height = DisplayHeight(display, screen);

       XImage *image = XGetImage(display, root, 0, 0, width, height, AllPlanes, ZPixmap);
       if (!image) {
           std::cerr << "Failed to capture X image" << std::endl;
           XCloseDisplay(display);
           return 1;
       }

       // TODO: Process the image data as needed

       XDestroyImage(image);
       XCloseDisplay(display);
       return 0;
   }
