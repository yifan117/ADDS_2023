#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class Document {
    private:
        std::string name;
        int id;
        int license_limit;
        int borrowed_count = 0;
        
        friend class DocumentManager;
};

#endif