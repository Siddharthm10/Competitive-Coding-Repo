// This was one of the solutions found in the discussion.
// I had a hard time understanding the question, I understood it using the solution
// and I will try it again after a few days.

class OrderedStream {
private:
    std::vector<string> stream;
    int readIdx;
public:
    OrderedStream(int n) {
        stream.resize(n);
        readIdx=0;
    }

    vector<string> insert(int idKey, string value) {
        // Insert the value at specified index
        stream[idKey-1] = value;

        // Current string at readidx is filled, need to return
        // the longest possible chunk. Loop all the values of
        // the stream starting from read idx and append it to
        // result only if it is not empty or reaches an index
        // where the string is empty
        int start = readIdx;
        while(readIdx < stream.size() && !stream[readIdx].empty()) {
            // String is inserted at this read Idx, increament the
            // readIdx and numelem
            readIdx++;
        }

        return vector<string>(stream.begin()+start, stream.begin()+readIdx);
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
