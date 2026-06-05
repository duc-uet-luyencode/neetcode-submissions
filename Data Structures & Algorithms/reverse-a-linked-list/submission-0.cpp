/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Cần 3 con trỏ để thực hiện cú "quay xe" này
        ListNode* prev = nullptr; // Con trỏ đi sau cùng (ban đầu trỏ vào khoảng không)
        ListNode* curr = head;    // Con trỏ hiện tại (đứng ở vị trí đầu tàu)
        
        // Bắt đầu duyệt cho đến khi curr đi hết danh sách (rơi vào nullptr)
        while (curr != nullptr) {
            // BƯỚC 1: Lưu lại phần còn lại của danh sách
            // Nếu không giữ lại mũi tên curr->next, khi ta cắt đứt nó, ta sẽ mất phần đuôi
            ListNode* nextTemp = curr->next; 
            
            // BƯỚC 2: Đảo chiều mũi tên
            // Rút mũi tên của curr đang chỉ về phía trước, cắm ngược về phía sau (prev)
            curr->next = prev; 
            
            // BƯỚC 3: Cùng nhau tiến lên 1 bước để xử lý Node tiếp theo
            prev = curr;     // prev nhích lên đứng vào vị trí của curr
            curr = nextTemp; // curr nhích lên đứng vào vị trí tiếp theo đã lưu ở Bước 1
        }
        
        // Khi vòng lặp kết thúc, curr đã rơi ra khỏi danh sách (bằng nullptr).
        // Lúc này, prev đang đứng ngay tại Node cuối cùng của danh sách cũ, 
        // và đó chính là cái Đầu mới (new head) của danh sách đã đảo ngược.
        return prev; 
    }
};