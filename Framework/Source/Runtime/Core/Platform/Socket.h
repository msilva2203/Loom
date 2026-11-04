#pragma once

#include "CoreTypes.h"
#include "Core/Platform/PlatformTypes.h"

namespace Loom {

    enum class EAddressFamily : u08
    {
        IPv4 = 0,
        IPv6
    };

    enum class ESocketType : u08
    {
        Stream = 0,     // TCP
        Datagram        // UDP
    };

    class LOOM_API SocketAddressBase
    {
    public:
        SocketAddressBase()
        {
        }


    };

    class LOOM_API SocketBase
    {
    public:
        SocketBase() {}
        virtual ~SocketBase() {}

        virtual b32 Create() = 0;
        virtual b32 Bind(const SocketAddressBase& inSocketAddress) = 0;
        virtual b32 Connect(const SocketAddressBase& inSocketAddress) = 0;
        virtual b32 Listen() = 0;

        virtual b32 Accept(SocketBase* outSocket) = 0;

        virtual std::ptrdiff_t Send(const void* inData, const SIZE_T inSize) = 0;
        virtual std::ptrdiff_t Receive(void* outData, const SIZE_T inSize) = 0;

        virtual void Close() = 0;

        virtual bool IsValid() const = 0;
    };

} /* Loom */
