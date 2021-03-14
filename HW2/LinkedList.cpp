#ifndef LinkList_h
#define LinkList_h
struct LinkList {
    struct Node {
        Node* next;
        int val;
    };
    ~LinkList() {

    }

    Node* head = nullptr;

    int front() const;
    void push_back(int v);
    void remove(int v);
    size_t size() const;
    bool empty() const { return not size(); }
};


#endif /* LinkList_h */