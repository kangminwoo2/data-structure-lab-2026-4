// MinHeap.h: 최소 힙 클래스 (프로그램 10.7)
#include "HeapNode.h"   
#include "MinHeap.h"
#define MAX_ELEMENT 200 //힙의 최대 크기

class Minheap {
    HeapNode node[MAX_ELEMENT];
    int size;
public:
    MinHeap() : size(0) { }

    bool isFull() { return size == MAX_ELEMENT - 1; }
    bool isEmpty() { return size == 0; }
    HeapNode& getParent(int i) { return node[i / 2]; }

    // 삽입 함수
    void insert(int key, int u, int v) {
    if (isFull()) return;
    int i = ++size;
    while (i != 1 && key < getParent(i).getKey()) {
        node[i] = getParent(i);
        i /= 2;
    }
    node[i].setKey(key, u, v);
}

    // 삭제 함수 (최솟값 변환)
    HeapNode& remove() {
        HeapNode item = node[1];
        HeapNode last = node[size--];
        int parent = 1, child = 2;
        while (child <= size) {
            if (child < size && node[child].getKey() > node[child + 1].getKey())
                child++;
            if (last.getKey() <= node[child].getKey()) break;
            node[parent] = node[child];
            parent = child;
            child *= 2;
        }
        node[parent] = last;
        node[0] = item;
        return node[0];
    }

};