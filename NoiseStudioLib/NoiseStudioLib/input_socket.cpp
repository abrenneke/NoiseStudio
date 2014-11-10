#include "input_socket.h"

namespace noises
{
    InputSocket::InputSocket(const std::string& name, SocketType type) : Socket(name, type) { }

    void InputSocket::set_accepts(const ConnectionDataType& type)
    {
        accepted_types_.add(type);
    }

    bool InputSocket::accepts(const ConnectionDataType& type) const
    {
        return accepted_types_.supports(type);
    }
}