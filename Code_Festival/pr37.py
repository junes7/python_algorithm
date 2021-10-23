data=input().split()
data_set=set(data);
dict={}
for key in data_set:
    dict[key]=data.count(key)
print(f'{max(dict, key=dict.get)}(이)가 총 {max(dict.values())}표로 반장이 되었습니다.')
