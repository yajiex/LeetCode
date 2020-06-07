class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        l.push_back(homepage);
        n = l.size();
        cur = n-1;
    }
    
    void visit(string url) {
        cur++;
        if(cur == l.size()) {
            l.push_back(url);
        } else {
            l[cur] = url;
        }
        n = cur+1;
    }
    
    string back(int steps) {
        auto index = cur;
        for(;index > 0 & steps > 0;index--) {
            steps--;
        }
        auto url = l[index];
        cur = index;
        cout<<cur<<" "<<n<<" "<<url<<endl;
        return url;
    }
    
    string forward(int steps) {
        auto index = cur;
        for(;index < n-1 && steps > 0;index++) {
            steps--;
        }
        auto url = l[index];
        cur = index;
        cout<<cur<<" "<<n<<" "<<url<<endl;
        return url;
    }

private:
    vector<string> l;
    int cur = 0;
    int n = 0;
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */