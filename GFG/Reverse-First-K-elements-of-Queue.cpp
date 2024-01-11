class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        
        vector<int>s;
        int size = q.size();
        
        for(int i=0; i<k; i++){
            s.push_back(q.front());
            q.pop();
        }
        reverse(s.begin(), s.end());
        for(int i=k; i<size; i++){
            s.push_back(q.front());
            q.pop();
        }
        for(int i=0; i<size; i++){
            q.push(s[i]);
        }
        return q;
    }
};
