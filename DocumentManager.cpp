#include "DocumentManager.h"

DocumentManager::DocumentManager() {}

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    Document new_doc;

    new_doc.id = id;
    new_doc.name = name;
    new_doc.license_limit = license_limit;

    documents[id] = new_doc;

    directory[name] = id;
}

void DocumentManager::addPatron(int patronID) {
    std::unordered_set<int> new_set;

    patrons[patronID] = new_set;
}

int DocumentManager::search(std::string name) {
    if (directory.find(name) != directory.end()) return directory[name];
    else return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) != patrons.end()) {
        if (documents.find(docid) != documents.end()) {
            if (documents[docid].borrowed_count < documents[docid].license_limit) {
                documents[docid].borrowed_count++;
                patrons[patronID].insert(docid);
                return true;
            }
        }
    }

    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    patrons[patronID].erase(docid);
    documents[docid].borrowed_count--;
}