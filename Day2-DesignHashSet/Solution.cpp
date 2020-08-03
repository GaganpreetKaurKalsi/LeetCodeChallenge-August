// Runtime: 220 ms
// Memory Usage: 52 MB
class MyHashSet {
    int numBucket;
    vector<vector<int>> buckets;
    int hash_function(int key){
        return key%numBucket;
    }
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        numBucket = 15000;
        buckets = vector<vector<int>>(numBucket,vector<int>{});
    }
    
    void add(int key) {
        int i = hash_function(key);
        if(find(buckets[i].begin(),buckets[i].end(),key)==buckets[i].end()){
            buckets[i].push_back(key);
        }
    }
    
    void remove(int key) {
        int i = hash_function(key);
        auto itr = find(buckets[i].begin(),buckets[i].end(),key);
        if(itr!=buckets[i].end()){
            buckets[i].erase(itr);
        }
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int i = hash_function(key);
        if(find(buckets[i].begin(),buckets[i].end(),key)==buckets[i].end()){
            return false;
        }
        return true;
    }
};
