class MyHashSet {
   private:
    static const int SIZE = 10007;
    std::vector<int> buckets[SIZE];

    int hash(int key) { return key % SIZE; }

   public:
    MyHashSet() {}

    void add(int key) {
        int index = hash(key);
        if (!contains(key)) {
            buckets[index].push_back(key);
        }
    }

    void remove(int key) {
        int index = hash(key);
        auto& bucket = buckets[index];
        auto it = std::find(bucket.begin(), bucket.end(), key);

        if (it != bucket.end()) {
            bucket.erase(it);
        }
    }

    bool contains(int key) {
        int index = hash(key);
        const auto& bucket = buckets[index];

        return std::find(bucket.begin(), bucket.end(), key) != bucket.end();
    }
};