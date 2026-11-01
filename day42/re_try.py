import re

names = ["photo_20240101.jpg", "report_20250612_v2.docx", "乱七八糟.txt", "img_202401011234.jpg"]

for n in names:
    print(n, "->", re.findall(r"\d{8}", n))

print("对比 \\d{8}：", re.findall(r"\d{8}", "img_202401011234.jpg"))
print("对比 \\d+  ：", re.findall(r"\d+", "img_202401011234.jpg"))
