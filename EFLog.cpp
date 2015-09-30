#include "EFLog.h"
#include <cstddef>

EFLog* EFLog::this_ = NULL;

EFLog::EFLog() : outStream_(NULL) {
}

EFLog& EFLog::getInstance() {
    if (!this_) {
        this_ = new EFLog();
    }
    return *this_;
}
