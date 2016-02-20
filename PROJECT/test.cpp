#include <stdio.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xatom.h>
using namespace std;
int main()
{
  Display *dpy = XOpenDisplay(0);
  while (1) {
    Window root_window;
    root_window = XRootWindow(dpy, 0);
    XSelectInput(dpy, root_window, KeyReleaseMask);
    XWarpPointer(dpy, None, root_window, 0, 0, 0, 0, 100, 100);
    XSync(dpy, False);
  }
}
