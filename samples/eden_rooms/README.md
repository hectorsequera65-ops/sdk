# Eden Rooms — PS5 ELF launcher

This small homebrew payload uses `sceSystemServiceLaunchWebBrowser` to request the PS5 system browser open **https://eden-rooms.pages.dev**.

It is based on the SDK's `samples/browser` example. It does not embed a browser, guarantee fullscreen display, or bypass PS5 browser restrictions. Actual behavior must be tested on the target PS5 (including firmware 6.02).

## Build locally

Install the SDK following the root README, set `PS5_PAYLOAD_SDK`, then run:

```sh
make -C samples/eden_rooms
```

The output is `samples/eden_rooms/EdenRooms.elf`.

## GitHub Actions

Go to **Actions → Build EdenRooms ELF → Run workflow**. Once successful, download the `EdenRooms-PS5-ELF` artifact and extract `EdenRooms.elf`. Do not execute a payload from an untrusted source.

The ELF only requests opening the URL. Whether the site works in the system browser depends on browser compatibility and network connectivity.
