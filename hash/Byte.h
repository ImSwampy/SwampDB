#ifndef BYTE_H
#define BYTE_H

#include <bitset>

namespace Byte {
    typedef std::bitset<8> Byte;

    Byte add(Byte byte1, Byte byte2);
    Byte multiply(Byte byte1, Byte byte2);
    Byte divide(Byte byte1, Byte byte2);
    Byte subtract(Byte byte1, Byte byte2);
}

#endif // BYTE_H
