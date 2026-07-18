/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return nullptr;

        vector<ListNode*> nodes;
        ListNode* curr=head;
        while(curr !=nullptr){
            nodes.push_back(curr);
            curr=curr->next;
        }

        int temp=nodes.size()-n;
        nodes.erase(nodes.begin()+temp);

        if(nodes.empty()) return nullptr;

        for(int i=0;i<nodes.size()-1;i++){
            nodes[i]->next=nodes[i+1];
        }
        nodes.back()->next=nullptr;
        return nodes[0];
    }
};
