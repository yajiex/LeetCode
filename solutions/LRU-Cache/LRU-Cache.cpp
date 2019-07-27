
// struct node{
//     node* pre;
//     int key;
//     int value;
//     node* next;
//     node(int k, int v):key(k),value(v),pre(NULL),next(NULL){};
// };

// class LRUCache{
//     unordered_map<int, node*> mp;
//     int capacity;
//     int size;
//     node* head;
//     node* tail;
// public:
//     LRUCache(int c){
//         if(c<0)return;
//         head = new node(-1,-1);
//         tail = new node(-1,-1);
//         head->next = tail;
//         tail->pre = head;
//         mp.clear();
//         capacity = c;
//         size = 0;
//     }
        
//     int get(int k) {
//         unordered_map<int, node*>::iterator it = mp.find(k);
//         if(it != mp.end()){
//             node* p = it->second;
//             p->pre->next = p->next;
//             p->next->pre = p->pre;
//             putToHead(p);
//             return p->value;
//         }
//         else
//             return -1;
//     }
        
//     void set(int k, int val) {
//         if(capacity < 1) return; 
//         unordered_map<int, node*>::iterator it = mp.find(k);
//         if(it != mp.end()){
//             node* p = it->second;
//             p->pre->next = p->next;
//             p->next->pre = p->pre;
//             putToHead(p);
//             p->value = val;
//         }else{
//             node* p = new node(k, val);
//             putToHead(p);
//             mp[k] = p;
//             size++;
//             if(size>capacity){
//                 p = tail->pre;
//                 tail->pre = p->pre;
//                 p->pre->next = tail;
//                 it = mp.find(p->key);
//                 mp.erase(it);
//                 delete p;
//             }
//         }
//     }

//     void putToHead(node* p)
//     {
//         p->next = head->next;
//         p->pre = head;
//         head->next->pre = p;
//         head->next = p;
//     }
// };

// 2019-07-27
// O(1)
struct Node {
    Node* pre;
    Node* next;
    int key;
    int val;
    Node(int k, int v)
    {
        key = k;
        val = v;
        pre = NULL;
        next = NULL;
    };
};

class LRUCache {
public:
    LRUCache(int capacity) {
        if (capacity < 0)
        {
            return;
        }
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->pre = head;
        mp.clear();
        maxSize = capacity;
        size = 0;
    }
    
    int get(int key) {
        unordered_map<int, Node*>::iterator it = mp.find(key);
        if(it != mp.end())
        {
            Node* p = it->second;
            p->pre->next = p->next;
            p->next->pre = p->pre;
            putToHead(p);
            return p->val;
        }
        else
        {
            return -1;
        }
    }
    
    void put(int key, int value) {
        if(maxSize < 1)
        {
            return;
        }
        unordered_map<int, Node*>::iterator it = mp.find(key);
        if(it == mp.end())
        {
            Node* p = new Node(key, value);
            putToHead(p);
            mp[key] = p;
            size++;
            if(size > maxSize)
            {
                p = tail->pre;
                tail->pre = p->pre;
                p->pre->next = tail;
                it = mp.find(p->key);
                mp.erase(p->key);
                size--;
            }
        }
        else
        {
            Node* p = it->second;
            p->pre->next = p->next;
            p->next->pre = p->pre;
            putToHead(p);
            p->val = value;
        }
    }
private:
    void putToHead(Node* p) {
        p->next = head->next;
        p->pre = head;
        head->next->pre = p;
        head->next = p;
    }
    
    unordered_map<int, Node*> mp;
    Node* head;
    Node* tail;
    int maxSize = 0;
    int size;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */