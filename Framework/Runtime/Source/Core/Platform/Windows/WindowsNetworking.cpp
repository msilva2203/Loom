#include "WindowsNetworking.h"

// link with Ws2_32.lib
#pragma comment(lib,"Ws2_32.lib")

#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>

namespace Loom {

    b32 WindowsNetworking::Init()
    {
        // [msilva2203]
        // @see https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-socket

        WSADATA wsaData = {0};
        int result;

        // Initialize Winsock
        result = WSAStartup(MAKEWORD(2, 2), &wsaData);

        if (result != 0)
        {

            return false;
        }

        return true;
    }

    b32 WindowsNetworking::Shutdown()
    {
        // [msilva2203]
        // @see https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-socket

        WSACleanup();

        return true;
    }

} /* Loom */
