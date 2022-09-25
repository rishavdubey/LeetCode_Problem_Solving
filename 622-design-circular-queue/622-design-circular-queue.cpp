class MyCircularQueue {
    vector<int>q;
    int front,k;
    int qsize;
public:
    MyCircularQueue(int _k) {
        front=0;qsize=0;q.resize(_k),k=_k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        q[(front+qsize)%k]=value;
        qsize++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front=(front + 1)%k;
        qsize--;
        return true;
    }
    
    int Front() {
       
        return isEmpty()?-1:q[front];
    }
    
    int Rear() {
        return isEmpty()?-1:q[(front + qsize-1)%k];
    }
    
    bool isEmpty() {
        return !qsize;
    }
    
    bool isFull() {
        return qsize==k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */