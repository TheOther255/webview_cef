#include "my_application.h"
#include <webview_cef/webview_cef_plugin.h>
#include <X11/Xlib.h>

int main(int argc, char** argv) {
  XInitThreads();
  int exit_code = initCEFProcesses(argc, argv);
  if (exit_code >= 0) {
    return exit_code;
  }
  g_autoptr(MyApplication) app = my_application_new();
  return g_application_run(G_APPLICATION(app), argc, argv);
}
