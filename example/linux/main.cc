#include <webview_cef/webview_cef_plugin.h>
#include "my_application.h"
#include <iostream>

int main(int argc, char** argv) {
  initCEFProcesses(argc, argv);
  g_autoptr(MyApplication) app = my_application_new();
  int status = g_application_run(G_APPLICATION(app), argc, argv);
  return status;
}
