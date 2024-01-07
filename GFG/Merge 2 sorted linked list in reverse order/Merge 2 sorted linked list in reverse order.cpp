class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
         Node* starter = new Node();
        Node *ans = starter;
        
        while(node1 != NULL && node2 != NULL){
            if(node1 -> data < node2 -> data){
                ans -> next = node1;
                node1 = node1 -> next;
                ans = ans -> next;
            }
            else{
                ans -> next = node2;
                node2 = node2 -> next;
                ans = ans -> next;
            }
        }
        
        if(node1 != NULL){
            ans -> next = node1;
        }
        if(node2 != NULL){
            ans -> next = node2;
        }
        
        Node* curr = starter -> next;
        Node* prev = NULL;
        
        while(curr != NULL){
            Node* forw = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        
        return prev;
    }  
};
