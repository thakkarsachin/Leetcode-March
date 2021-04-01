//Given the head of a singly linked list, return true if it is a palindrome.

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string s="";
        while(head!=NULL){
            s+=(char)(head->val+48);
            head=head->next;
        }


        for(int i=0;i<s.size()/2;++i){
            if(s[i]!=s[s.size()-i-1])
                return false;
        }
        return true;
    }
};