#include <libsystem/list.h>

#include "Compositor/Manager.h"
#include "Compositor/Window.h"

static List *_managed_windows;

void manager_initialize(void)
{
    _managed_windows = list_create();
}

void manager_register_window(Window *window)
{
    list_pushback(_managed_windows, window);
}

void manager_unregister_window(Window *window)
{
    list_remove(_managed_windows, window);
}