#include <iostream>
#include <deque>
#include <stdexcept>
#include <vector>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  auto words = { "Hello, ", "World!", "\n" };
  for (const char* const& word : words) {
    cout << word;
  }
  return 0;
}

// HashMap<K,V>(N) = std::hash<K>
// Put(K,V)
// Get(K)

// Put("a", "b")
// Put("a", "c")
// Get("a") = ?

template <typename K, typename V>
class HashMap {
public:
  HashMap(size_t _size) {
    size = _size;
    buckets.resize(size);
  }

  void put(K key, V value) {
    size_t bucket = hash(key) % size;
    auto it = buckets[bucket].begin();

    while (it != buckets[bucket].end()) {
      if (it.first == key) {
        it.second = value;
      }
      it++;
    }

    buckets[bucket].push_back({key, value});
  }

  V get(K key) {
    size_t bucket = hash(key) % size;    
    auto it = buckets[bucket].begin();

    while (it != buckets[bucket].end()) {
      if (it.first == key) {
        return it.second;
      }
      it++;
    }

    throw runtime_error("Key doesn't exist");
  }

private:
  size_t size;
  vector<deque<pair<K,V>>> buckets;
};

// Your previous Plain Text content is preserved below:

// This is just a simple shared plaintext pad, with no execution capabilities.

// When you know what language you'd like to use for your interview,
// simply choose it from the dots menu on the tab, or add a new language
// tab using the Languages button on the left.

// You can also change the default language your pads are created with
// in your account settings: https://app.coderpad.io/settings

// Enjoy your interview!