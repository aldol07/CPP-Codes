#include<bits/stdc++.h>
using namespace std;
struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int lengthofLL(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp)
    {
        //cout << temp->data<<" ";
        temp = temp->next;
        cnt++;
    }
    
    return cnt;

}

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
    

}

int checkifpresent(Node* head, int val){
    Node* temp = head;
    while (temp)
    {
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
    
}

void print(Node* head) {
    while(head != NULL){
        cout<< head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* removehead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removetail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* removeK(Node* head, int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removeEL(Node* head, int el){
    if(head == NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* inserthead(Node* head, int val){
    Node* temp = new Node(val,head);
    return temp;
}

Node* inserttail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertKVal(Node* head, int k , int val){
    if(head == NULL) {
        if(k == 1){
            return new Node(val);
        }
        else {
            return NULL;
        }
    }
    if(k == 1){
        Node* temp = new Node(val,head);
        return temp;
    }

    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            Node* x = new Node(val,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertelbeforeVal(Node* head, int el , int val){
    if(head == NULL) {
       return NULL;
    }
    if(head->data == val){
        Node* temp = new Node(el,head);
        return temp;
    }

    Node* temp = head;
    while(temp->next != NULL){
        
        if(temp->next->data == val){
            Node* x = new Node(el,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {2, 4, 5, 6, 7};
    // Node* y = new Node{arr[1],nullptr};
    // cout <<y->data;
    Node* head = convertArr2LL(arr);
    //cout << head->data;
    // Node* temp = head;
    // while (temp)
    // {
    //     cout << temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout << lengthofLL(head);
    //cout << checkifpresent(head,5);
    // head = removehead(head);
    //head = removetail(head);
    //head = removeK(head,8);
    // head = removeEL(head,5);
    // head = inserthead(head, 23);
    //head = inserttail(head,45);
    //head = insertKVal(head, 3, 34);
    head = insertelbeforeVal(head, 10, 7);
    print(head);
}
