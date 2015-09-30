#ifndef EFLOG_H
#define EFLOG_H

#include <iostream>

class EFLog {
    public:
        static EFLog& getInstance();
        void setOutStream(std::ostream&);

        void log(std::string s, int level, int fileName, int lineNum);

    private:
        static EFLog* this_;
        std::ostream outStream_;

        EFLog();
        ~EFLog() {
            delete this_;
        };
        EFLog(EFLog& rhs);
};

#endif
