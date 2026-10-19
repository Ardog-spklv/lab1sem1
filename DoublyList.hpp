#ifndef DOUBLYLIST_HPP
#define DOUBLYLIST_HPP
#include <string>
#include <vector>
#include <iostream>

class DoublyList {
private:
    struct Node {
        std::string data;
        Node* prev;
        Node* next;
        Node(const std::string& val) : data(val), prev(nullptr), next(nullptr) {}
    };
    Node* head;
    Node* tail;
    int size;

public:
    DoublyList();
    ~DoublyList();

    void push_front(const std::string& val);
    void push_back(const std::string& val);
    void insert_before_at(int index, const std::string& val);
    void insert_after_at(int index, const std::string& val);
    void insert_before_value(const std::string& target, const std::string& val);
    void insert_after_value(const std::string& target, const std::string& val);
    void pop_front();
    void pop_back();
    void remove_at(int index);
    void remove_by_value(const std::string& val);
    bool find(const std::string& val) const;
    std::string get(int index) const;
    int getSize() const;
    void print() const;

    std::vector<std::string> getData() const;
    void setData(const std::vector<std::string>& d);
};
#endif
