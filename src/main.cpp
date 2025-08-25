static bool running = true;

bool platform_create_window(int width, int height, char* title);

// Windows Platform
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

// Windows Globals


// Platform Implementations
#endif


int main()
{
    platform_create_window(1200, 720, "Celeste Motor");
    while (running)
    {
        // Update
    }
    return 0;
}
