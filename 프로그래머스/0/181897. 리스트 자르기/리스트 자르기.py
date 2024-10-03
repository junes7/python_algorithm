def solution(n, slicer, num_list):
    a,b,c=slicer
    print(num_list)
    r={2:num_list[a:],3:num_list[a:b+1],4:num_list[a:b+1:c]}.get(n,num_list[:b+1])
    return r