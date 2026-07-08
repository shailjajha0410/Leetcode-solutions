class Solution(object):
    def hasCycle(self, head):
        slow = head   #slow moves 1 step at a time (starts from head)
        fast = head   #fast moves 2 steps at a time (starts from head)

        while fast and fast.next:
            slow = slow.next  # move next step
            fast = fast.next.next   #move two steps
            if slow == fast:  #if both reaches at one point ever
                return True   #there is a loop
        return False     #there ain't a loop
