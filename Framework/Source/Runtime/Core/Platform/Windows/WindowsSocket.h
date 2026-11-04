#pragma once

#include "CoreTypes.h"
#include "Platform/Socket.h"

#if defined(LOOM_PLATFORM_WINDOWS)

// link with Ws2_32.lib
#pragma comment(lib,"Ws2_32.lib")

#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>

namespace Loom {

    class LOOM_API WindowsSocketAddress : public SocketAddressBase
    {
    public:


    };

    class LOOM_API WindowsSocket : public SocketBase
    {
    public:
        WindowsSocket();
        ~WindowsSocket();

        virtual b32 Create() override;
        virtual b32 Bind(const SocketAddressBase& inSocketAddress) override;
        virtual b32 Connect(const SocketAddressBase& inSocketAddress) override;
        virtual b32 Listen() override;

        virtual b32 Accept(SocketBase* outSocket) override;

        virtual std::ptrdiff_t Send(const void* inData, const SIZE_T inSize) override;
        virtual std::ptrdiff_t Receive(void* outData, const SIZE_T inSize) override;

        virtual void Close() override;

        virtual bool IsValid() const override;

    private:
        SOCKET sock;

    };

} /* Loom */

#endif /* LOOM_PLATFORM_WINDOWS */
