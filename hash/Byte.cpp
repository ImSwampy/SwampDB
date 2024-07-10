#include "Byte.h"
#include <iostream>

namespace Byte {

    Byte add(Byte &byte1, Byte byte2) {
        unsigned short int result = byte1.to_ulong() + byte2.to_ulong();
        if (0 < result && result < 255) {
            return result;
        } else if (0 >= result) {
            return 1;
        } else if (result > 255) {
            return result % 255;
        } else {
            std::cerr << "Error in Byte::add() function" << std::endl;
            return result;
        }
    }

    Byte multiply(Byte &byte1, Byte byte2) {
        unsigned short int result = byte1.to_ulong() * byte2.to_ulong();
        if (0 < result && result < 255) {
            return result;
        } else if (0 >= result) {
            return 1;
        } else if (result > 255) {
            return result % 255;
        } else {
            std::cerr << "Error in Byte::multiply() function" << std::endl;
            return result;
        }
    }

    Byte divide(Byte &byte1, Byte byte2) {
        unsigned short int result = byte1.to_ulong() / byte2.to_ulong();
        if (0 < result && result < 255) {
            return result;
        } else if (0 >= result) {
            return 1;
        } else if (result > 255) {
            return result % 255;
        } else {
            std::cerr << "Error in Byte::divide() function" << std::endl;
            return result;
        }
    }

    Byte subtract(Byte &byte1, Byte byte2) {
        unsigned short int result = byte1.to_ulong() - byte2.to_ulong();
        if (0 < result && result < 255) {
            return result;
        } else if (0 >= result) {
            return 1;
        } else if (result > 255) {
            return result % 255;
        } else {
            std::cerr << "Error in Byte::subtract() function" << std::endl;
            return result;
        }
    }
}
