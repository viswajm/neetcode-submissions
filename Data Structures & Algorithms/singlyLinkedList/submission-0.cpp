class Node {
   private:
    int val;
    Node* next;

   public:
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }

    friend class LinkedList;
};

class LinkedList {
   private:
    Node* head;
    int size;

   public:
    LinkedList() {
        head = new Node(-1);
        size = 0;
    }

    ~LinkedList() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }
        Node* curr = head->next;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr->val;
    }

    void insertHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head->next;
        head->next = newNode;
        size++;
    }

    void insertTail(int val) {
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        Node* newNode = new Node(val);
        curr->next = newNode;
        size++;
    }

    bool remove(int index) {
        if (index < 0 || index >= size) {
            return false;
        }
        Node* prev = head;
        for (int i = 0; i < index; ++i) {
            prev = prev->next;
        }
        Node* toDelete = prev->next;
        prev->next = toDelete->next;
        delete toDelete;
        size--;
        return true;
    }

    vector<int> getValues() {
        std::vector<int> values;
        Node* curr = head->next;
        while (curr != nullptr) {
            values.push_back(curr->val);
            curr = curr->next;
        }
        return values;
    }
};