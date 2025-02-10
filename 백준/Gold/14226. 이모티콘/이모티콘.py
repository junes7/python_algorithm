import sys
def min_time_to_make_emoticons(s):
    visited=set()
    queue=[(1,0,0)]
    visited.add((1,0))
    while queue:
        screen,clipboard,time=queue.pop(0)
        if screen==s:
            return time;
        if (screen,screen) not in visited:
            visited.add((screen,screen))
            queue+=[(screen,screen,time+1)]
        if clipboard>0 and (screen+clipboard,clipboard) not in visited:
            visited.add((screen+clipboard,clipboard))
            queue+=[(screen+clipboard,clipboard,time+1)]
        if screen>0 and (screen-1,clipboard) not in visited:
            visited.add((screen-1,clipboard))
            queue+=[(screen-1,clipboard,time+1)]
s=int(sys.stdin.readline().rstrip())
print(min_time_to_make_emoticons(s))