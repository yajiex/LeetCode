class ExamRoom {
public:
    ExamRoom(int N) {
        n = N;
    }
    
    int seat() {
        if (seats.empty()) {
            seats.push_back(0);
            mp[0] = seats.begin();
            return 0;
        }
        
        int last = -1;
        int dist;
        int val;
        list<int>::iterator pos;
        for(auto it = seats.begin();it!=seats.end();it++) {
            if(last == -1) {
                dist = *it;
                pos = it;
                val = 0;
            } else if ((*it - last) / 2 > dist) {
                dist = (*it - last) / 2;
                pos = it;
                val = (*it + last) / 2;
            }
            
            last = *it;
        }
        if (n - 1 - seats.back() > dist) {
            pos = seats.end();
            val = n - 1;
        }
        
        mp[val] = seats.insert(pos, val);
        return val;
    }
    
    void leave(int p) {
        seats.erase(mp[p]);
    }

private:
    int n;
    list<int> seats;
    unordered_map<int, list<int>::iterator> mp;
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(N);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */