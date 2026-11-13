/* Eden Rooms PS5 browser launcher. GPL-3.0-or-later.
 * Based on samples/browser in ps5-payload-sdk by John Törnblom.
 */
#include <stdio.h>
#include <stdlib.h>

int sceUserServiceInitialize(void *);
int sceUserServiceTerminate(void);
int sceSystemServiceLaunchWebBrowser(const char *, void *);

#define EDEN_ROOMS_URL "https://eden-rooms.pages.dev"

int main(void) {
    int result = sceUserServiceInitialize(NULL);
    if (result != 0) {
        printf("Eden Rooms: UserService initialization failed: %d\n", result);
        return EXIT_FAILURE;
    }
    result = sceSystemServiceLaunchWebBrowser(EDEN_ROOMS_URL, NULL);
    if (result != 0) {
        printf("Eden Rooms: browser launch failed: %d\n", result);
    }
    sceUserServiceTerminate();
    return result == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
