class Node{
public:
    int data;
    Node* prev=NULL;
    Node* next=NULL;
    Node(int d){
        data=d;
    }
};
class MyCircularDeque {
    Node* head;
    Node* tail;
    int qsize,k;
public:
    MyCircularDeque(int _k) {
        head=NULL;
        tail=NULL;
        qsize=0;k=_k;
        
    }
    bool insertFront(int value) {
        if(isFull()) return false;
        Node* temp=new Node(value);
        if(qsize==0){
            head=tail=temp;
        }else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        qsize++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        Node* temp=new Node(value);
        if(qsize==0){
            head=tail=temp;
        }else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        qsize++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        Node* n=head;
        head=head->next;
        // head->prev=NULL;
        qsize--;
        delete n;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        Node* n=tail;
        tail=tail->prev;
        // tail->next=NULL;
        qsize--;
        delete n;
        return true;
    }
    
    int getFront() {
        return isEmpty()? -1 : head->data;
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        return tail->data;
    }
    
    bool isEmpty() {
        return !qsize;
    }
    
    bool isFull() {
        return qsize==k;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */