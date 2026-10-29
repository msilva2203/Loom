#include "WindowsSocket.h"

namespace Loom {

    WindowsSocket::WindowsSocket()
    {
        sock = INVALID_SOCKET;
    }

    WindowsSocket::~WindowsSocket()
    {

    }

    b32 WindowsSocket::Create()
    {
        // [msilva2203]
        // @see https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-socket

        sock = INVALID_SOCKET;
        int addressFamily = AF_UNSPEC;
        int socketType = SOCK_STREAM;
        int protocol = IPPROTO_TCP;

        sock = socket(addressFamily, socketType, protocol);

        if (sock == INVALID_SOCKET)
        {
            const int error = WSAGetLastError();

            return false;
        }

        return true;
    }

    b32 WindowsSocket::Bind(const SocketAddressBase& inSocketAddress)
    {
        // [msilva2203]
        // @see https://learn.microsoft.com/en-us/windows/win32/api/winsock/nf-winsock-bind

        sockaddr_in service;
        service.sin_family = AF_INET;
        service.sin_addr.s_addr = inet_addr("127.0.0.1");
        service.sin_port = htons(27015);

        const int result = bind(sock, (SOCKADDR *) &service, sizeof(service));

        if (result == SOCKET_ERROR)
        {
            Close();

            return false;
        }

        return true;
    }

    b32 WindowsSocket::Connect(const SocketAddressBase& inSocketAddress)
    {
        // [msilva2203]
        // @see https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-connect

        sockaddr_in service;
        service.sin_family = AF_INET;
        service.sin_addr.s_addr = inet_addr("127.0.0.1");
        service.sin_port = htons(27015);

        const int result = connect(sock, (SOCKADDR *) &service, sizeof(service));

        if (result == SOCKET_ERROR)
        {
            Close();

            return false;
        }

        return true;
    }

    b32 WindowsSocket::Listen()
    {
        // [msilva2203]
        // @see https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-listen

        const int backlog = SOMAXCONN;
        const int result = listen(sock, backlog);

        if (result == SOCKET_ERROR)
        {
            return false;
        }

        return true;
    }

    b32 WindowsSocket::Accept(SocketBase* outSocket)
    {
        // [msilva2203]
        // @see https://learn.microsoft.com/en-us/windows/win32/api/winsock2/nf-winsock2-accept

        if (outSocket == nullptr)
        {
            return false;
        }

        const int acceptSock = accept(sock, NULL, NULL);

        if (acceptSock == INVALID_SOCKET)
        {

            return false;
        }

        return true;
    }

    void WindowsSocket::Close()
    {
        // [msilva2203]
        // @see https://learn.microsoft.com/en-us/windows/win32/api/winsock/nf-winsock-closesocket

        const int result = closesocket(sock);

        if (result == SOCKET_ERROR)
        {

        }
    }

    bool WindowsSocket::IsValid() const
    {
        if (sock == INVALID_SOCKET)
        {
            return false;
        }

        return true;
    }

} /* Loom */
