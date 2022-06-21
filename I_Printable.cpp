//
// Created by STZ on 6/15/22.
//
#include "I_Printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}
