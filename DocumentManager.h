#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include "Document.h"

#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>

class DocumentManager {
    private:
        std::unordered_map<int, Document> documents;
        std::unordered_map<int, std::unordered_set<int>> patrons;
        std::unordered_map<std::string, int> directory; // searches name to find docid

    public:
        void addDocument(std::string name, int id, int license_limit);

        void addPatron(int patronID);

        int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection

        bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)

        void returnDocument(int docid, int patronID);
};

#endif