import csv
csv_path = r"D:\zab\day47\data\data.csv"
with open(csv_path, encoding="utf-8-sig") as f:
    reader = csv.reader(f)
    next(reader)
    content = {}
    for row in reader:
        key=tuple(row)
        if key in content:
            content[key]+=1
        else:
            content[key]=1
    found=0
    for k,v in content.items():
        if v>1:
            print(f"有重复：{k}")
            found=1
    if not found:
        print("无重复")


