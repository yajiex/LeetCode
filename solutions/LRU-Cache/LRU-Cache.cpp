
struct node{
    node* pre;
    int key;
    int value;
    node* next;
    node(int k, int v):key(k),value(v),pre(NULL),next(NULL){};
};

class LRUCache{
    unordered_map<int, node*> mp;
    int capacity;
    int size;
    node* head;
    node* tail;
public:
    LRUCache(int c){
        if(c<0)return;
        head = new node(-1,-1);
        tail = new node(-1,-1);
        head->next = tail;
        tail->pre = head;
        mp.clear();
        capacity = c;
        size = 0;
    }
        
    int get(int k) {
        unordered_map<int, node*>::iterator it = mp.find(k);
        if(it != mp.end()){
            node* p = it->second;
            p->pre->next = p->next;
            p->next->pre = p->pre;
            putToHead(p);
            return p->value;
        }
        else
            return -1;
    }
        
    void set(int k, int val) {
        if(capacity < 1) return; 
        unordered_map<int, node*>::iterator it = mp.find(k);
        if(it != mp.end()){
            node* p = it->second;
            p->pre->next = p->next;
            p->next->pre = p->pre;
            putToHead(p);
            p->value = val;
        }else{
            node* p = new node(k, val);
            putToHead(p);
            mp[k] = p;
            size++;
            if(size>capacity){
                p = tail->pre;
                tail->pre = p->pre;
                p->pre->next = tail;
                it = mp.find(p->key);
                mp.erase(it);
                delete p;
            }
        }
    }

    void putToHead(node* p)
    {
        p->next = head->next;
        p->pre = head;
        head->next->pre = p;
        head->next = p;
    }
};
 